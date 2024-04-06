/**
 *    author: mralves 
 *    created: 02-12-2023 15:47:14       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;
using pii = pair<int, int>;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
vector<pii> dir4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
vector<pii> dir8 = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};

const int MAXN = 1e5;
int n;
int tree[2*MAXN];

void build() { // build the tree
  for(int i=n-1; i>0; i--) {
    tree[i] = tree[i<<1] + tree[i<<1|1];
  }
}

void modify(int p, int value) {
  for(tree[p += n] = value; p> 1; p >>=1) {
    tree[p>>1] = tree[p] + tree[p^1];
  }
}

int query(int l, int r) { // sum on interval [l, r)
  int res = 0;
  for(l+=n, r += n; l<r; l>>=1, r>>=1) {
    if(l&1) res += tree[l++];
    if(r&1) res += tree[--r];
  }
  return res;
}


// second implementation

int seg[N*2];

void build(vector<int> a) {
  for(int i=N-a.size()-1; i<N; i++) {
    seg[i] = a[i];
  }
}

// set the element at pos i to v
void set(int i, int v) {

}

// calculate the sum of [l, r)
void sum() {
}

void solve() {
  cin>>n;
  for(int i=0; i<n; i++) {
    cin>>tree[n+i];
  }
  build();
  modify(0, 1);
  cout<<query(0, 5)<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
