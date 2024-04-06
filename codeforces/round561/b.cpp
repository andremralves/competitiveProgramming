/**
 *    author: mralves 
 *    created: 12-11-2023 22:46:57       
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
  int K; cin>>K;

  bool found = false;
  int N, M;
  for(int i=1; i*i<=K; i++) {
    if(K%i==0 and i >= 5 and K/i >= 5) {
      found = true; 
      N = i, M = K/i;
      break;
    }
  }

  if(!found) {
    cout<<"-1\n";
  } else {
    string s = "aeiou";
    for(int i=0; i<N; i++) {
      for(int j=0; j<M; j++) {
        cout<<s[(i+j)%5];
      }
    }
    cout<<"\n";
  }
}

// 18
// aeiou
// aeiou
// aeiou
// aeiou
// aei

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
