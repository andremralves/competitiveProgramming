/**
 *    author: mralves 
 *    created: 27-05-2023 08:55:48       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;
using ii = pair<int, int>;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
vector<ii> dir4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
vector<ii> dir8 = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};

void solve() {
    int N, M, H, K;
    cin>>N>>M>>H>>K;
    string s;
    set<pair<int, int>> sp;
    cin>>s;

    for(int i=0; i<M; i++) {
            int x, y;
            cin>>x>>y;
            sp.insert({x, y});
    }

    ii x = {0, 0};

    for(int i=0; i<(int)s.size(); i++) {
        H--;
        if(s[i] == 'R') {
            x.first++;
        } else if(s[i] == 'L') {
            x.first--;
        } else if(s[i] == 'U') {
            x.second++;
        } else if(s[i] == 'D') {
            x.second--;
        }
        if(H < 0) {
            cout<<"No\n";
            return;
        }
        if(H < K and sp.count(x)) {
            H = K;
            sp.erase(x);
        } 
    }
    cout<<"Yes\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    //cin>>t;
    while (t--) solve();
    return 0;
}
