/**
 *    author: mralves 
 *    created: 19-12-2023 11:35:20       
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
  cin>>N>>K;
  vector<int> a(N), b(N);
  for(int i=0; i<N; i++) {
    cin>>a[i];
  }
  for(int i=0; i<N; i++) {
    cin>>b[i];
  }

  vector<int> ans;
  int sum = 0;
  int mx = 0;
  int i=0;
  while(K--) {
    //cout<<"s:"<<sum<<"\n";
    if(i == N) {
      sum += mx*(K+1);
      break;
    }
    if(i>0) {
      ans.emplace_back(sum+mx*(K+1));
      //cout<<sum+mx*(K+1)<<"\n";
    }
    sum += a[i];
    mx = max({b[i], mx});
    i++;
  }
  ans.emplace_back(sum);
  sort(all(ans));
  cout<<ans.back()<<"\n";
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
