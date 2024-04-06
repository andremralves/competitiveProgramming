/**
 *    author: mralves 
 *    created: 22-09-2023 16:08:15       
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
    int n, m;
    cin>>n>>m;

    vector<vector<int>> ts(m);
    vector<int> price(m);
    for(int i=0; i<m; i++) {
        int a, b;
        cin>>a>>b;
        price[i] = m;
        for(int j=0; j<b; j++) {
            int c; cin>>c;
            ts[i].push_back(c);
        }
    }

    vector<set<int>> dp(m+1);
    for(int i=0; i<m; i++) {
        for(int j=0; j<(int)m[i].size(); j++) {
        }
        for(int i=0; i<n; i++) {
        }
    }
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
