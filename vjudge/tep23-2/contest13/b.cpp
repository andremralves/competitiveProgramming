/**
 *    author: mralves 
 *    created: 01-12-2023 15:45:19       
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

  int N;
  cin>>N;

  map<string, int> mp;
  for(int i=0; i<N; i++) {
    string s;
    cin>>s;

    mp[s]++;
  }

  cout<<"AC x "<<mp["AC"]<<"\n";
  cout<<"WA x "<<mp["WA"]<<"\n";
  cout<<"TLE x "<<mp["TLE"]<<"\n";
  cout<<"RE x "<<mp["RE"]<<"\n";


}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
