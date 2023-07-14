/**
 *    author: mralves 
 *    created: 24-05-2023 00:24:13       
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
    vector grid(n, vector<char>(m));
    for(int i=0; i<n; i++) {
        for(int j=0; j<m;j++) {
            cin>>grid[i][j];
        }
    }

    vector used(n, vector<bool>(m));
    auto dfs = [&](auto &&dfs, int i, int j) {
        if(used[i][j] or grid[i][j] == '#') return;
        used[i][j] = true;
        for(auto [x, y]: dir4) {
            int xx = i+x, yy = j+y;
            if(xx >=n or yy >= m) continue;
            if(xx < 0 or yy < 0) continue;
            dfs(dfs, xx, yy);
        }
    };

    int ans = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m;j++) {
            if(!used[i][j] and grid[i][j] == '.') {
                ans++;
                dfs(dfs, i, j);
            }
        }
    }
    cout<<ans<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
