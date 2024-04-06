/**
 *    author: mralves 
 *    created: 23-03-2024 08:59:03       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

const int MAXN = 100005;
int BIT1[MAXN];
int H, W, M;
void update(int i, int v) {
  for(++i;i<=H;i+=i&-i) {
    BIT1[i] += v;
  }
}
int query(int i) {
  int res = 0;
  for(++i; i>=1; i-=i&-i) {
    res += BIT1[i];
  }
  return res;
}
void update(int l, int r, ll v) {
  update(l, v);
  update(r+1, -v);
}

int BIT2[MAXN];
void update2(int i, int v) {
  for(++i;i<=W;i+=i&-i) {
    BIT2[i] += v;
  }
}
int query2(int i) {
  int res = 0;
  for(++i; i>=1; i-=i&-i) {
    res += BIT2[i];
  }
  return res;
}
void update2(int l, int r, ll v) {
  update2(l, v);
  update2(r+1, -v);
}


const int MAXX = 2e5+10;
void solve() {
  cin>>H>>W>>M;
  for(int i=0; i<H; i++) {
    update(i, i, W);
  }
  for(int i=0; i<W; i++) {
    update2(i, i, H);
  }
  vector<int> colorH(H), colorW(W);
  for(int i=0; i<M; i++) {
    int t, a, x;
    cin>>t>>a>>x;
    a--;
    if(t == 1) {
      int v = query(a);
      update(a, a, -v);
      update(a, a, W);
      colorH[a] = x;
      update2(0, -1);
    } else {
      int v = query2(a);
      update2(a, a, -v);
      update2(a, a, H);
      colorW[a] = x;
      update(0, -1);
    }
  }

  vector<int> cnt1(MAXX);
  vector<int> sum(MAXX);
  for(int i=0; i<H; i++) {
    int col = colorH[i];
    cnt1[col]++;
    sum[col] += query(i);
  }
  for(int i=0; i<W; i++) {
    int col = colorW[i];
    sum[col] += query2(i) - cnt1[col];
  }

  vector<pair<int, ll>> ans;
  for(int i=0; i<MAXX; i++) {
    if(sum[i] > 0) {
      ans.push_back({i, sum[i]});
    }
  }
  cout<<ans.size()<<"\n";
  for(auto [x, y]:ans) {
    cout<<x<<" "<<y<<"\n";
  }
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  while (t--) solve();
  return 0;
}
