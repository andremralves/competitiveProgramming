/**
 *    author: mralves 
 *    created: 02-01-2024 15:06:48       
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

void solve() {
  int N; cin>>N;
  vector<ll> psum(N-1);
  for(int i=0; i<N-1; i++) {
    cin>>psum[i];
  }

  set<ll> st;
  st.insert(psum[0]);
  int check = -1;
  if(psum[0] > N) check = 0;
  for(int i=1; i<N-1; i++) {
    ll x = psum[i]-psum[i-1];
    if(st.count(x) == 1 or x > N) {
      if(check != -1) {
        cout<<"NO\n";
        return;
      }
      check = i;
    }
    st.insert(x);
  }

  if(check == -1) {
    cout<<"YES\n";
    return;
  }

  vector<ll> miss;
  for(int i=1; i<=N; i++) {
    if(st.count(i) == 0)
      miss.emplace_back(i);
  }

  bool ok = true;
  ll x = 0;
  if(check > 0) x = psum[check-1];
  st.insert(psum[check]-miss[0]-x);
  st.insert(miss[0]);
  if(psum[check]-x >N)
    st.erase(psum[check]-x);
  for(int i=1; i<=N; i++) {
    if(st.count(i) == 0)
      ok = false;
  }

  cout<<(ok?"YES\n":"NO\n");

}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}
