/**
 *    author: mralves 
 *    created: 23-02-2024 11:35:46       
**/
#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

void solve() {
  int N, K;
  cin>>N>>K;
  vector<pair<int, int>> a(N);
  for(int i=0; i<N; i++) {
    cin>>a[i].second;
  }
  for(int i=0; i<N; i++) {
    cin>>a[i].first;
    if(a[i].first < 0) a[i].first *= -1;
  }
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
  for(int i=0; i<N; i++) pq.push(a[i]);
  int curk = K;
  int pos = 0;
  bool ok = true;
  while(!pq.empty()) {
    if(curk == 0) {
      curk = K;
      pos++;
    }
    auto M = pq.top();
    pq.pop();
    //cout<<M.first<<" "<<pos<<"\n";
    int take = min(M.second, curk);
    curk -= take;
    M.second -= take;
    if(curk > 0) continue;
    pos += M.second/K;
    M.second = M.second%K;
    if(M.second > 0) {
      pos++;
      curk = K-M.second;
    }
    if(M.first-pos<=0) {
      ok = false;
      break;
    }
  }
  if(ok) {
    cout<<"YES\n";
  } else {
    cout<<"NO\n";
  }
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  cin>>t;
  while (t--) solve();
  return 0;
}
