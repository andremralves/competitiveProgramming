/**
 *    author: mralves 
 *    created: 03-11-2023 11:32:58       
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

int sumDig(string s) {
  int res = 0;
  for(auto c: s) {
    res += c-'0';
  }
  return res;
}

void solve() {
  int N;
  cin>>N;
  vector<map<int, int>> mp(6);
  vector<string> ss;
  for(int i=0; i<N; i++) {
    string s;
    cin>>s;
    ss.push_back(s);
    int sum = sumDig(s);
    mp[(int)s.size()][sum]++;
  }

  ll ans = 0, eq = 0;
  for(int i=0; i<N; i++) {
    int sz = (int)ss[i].size();
    for(int j=1; j<=5; j++) {
      if((sz+j)%2==0) {
        int sum = sumDig(ss[i]);
        if(sz > j) {
          //cout<<ss[i]<<" ";
          //cout<<sum<<"\n";
          cout<<ss[i]<<" ";
          cout<<"j:"<<j<<" ";
          cout<<ss[i].substr((sz+j)/2)<<" ";
          sum -= sumDig(ss[i].substr((sz+j)/2))*2;
          cout<<sum<<" > ";
          cout<<mp[j][sum]*2<<"\n";
          ans += mp[j][sum]*2;
        } else if(sz == j) {
          sum = sumDig(ss[i]);
          cout<<ss[i]<<" ";
          cout<<"j:"<<j<<" ";
          cout<<mp[j][sum]<<"\n";
          eq += mp[j][sum]-1;
        }
      }
    }
  }
  cout<<ans+N+eq/2<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
