/**
 *    author: mralves 
 *    created: 27-10-2023 21:41:47       
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
  string line, empty;
  getline(cin, empty);
  getline(cin, line);
  stringstream ss(line);
  string s;
  bool found = false;
  while(ss>>s) {
    if(s == "the") {
      found = true;
    }
  }

  vector<string> vs;

  for(auto s: line) {
    vs.push_back(s);
  }


  for(int i=0; i<(int)line.size(); i++) {
    if(line[i] == ' ') continue;
    int c = line[i]-'a';
    if(found) {
      c = (c - N)%26;
      if(c < 0)
        c += 26;
    } else {
      c = (c + N)%26;
    }
    line[i] = 'a'+c;
  }
  cout<<line<<"\n";
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
