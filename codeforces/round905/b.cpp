/**
 *    author: mralves 
 *    created: 25-10-2023 03:12:39       
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
  int N, K;
  string s;
  cin>>N>>K>>s;

  vector<int> hist(26);
  for(auto c : s) {
    hist[c-'a']++;
  }

  int rem = N-K;

  int odd = 0;
  for(int i=0; i<26; i++) {
    if(hist[i]%2)
      odd++;
  }
  if(rem%2) {
    odd--;
  }

  if(odd <= K) {
    cout<<"YES\n";
  } else {
    cout<<"NO\n";
  }
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
