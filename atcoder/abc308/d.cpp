/**
 *    author: mralves 
 *    created: 01-07-2023 09:01:05       
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
    int h, w;
    cin>>h>>w;

    vector<string> grid(h);
    for(int i=0; i<h; i++) {
        cin>>grid[i];
    }

    string look = "snuke";

    bool ans = false;
    auto dfs = [&](auto &&dfs, int i, int j, int targ, set<ii> path) {
        if(path.count({i, j})) return;
        if(look.find(grid[i][j]) == look.size()) return;
        if(grid[i][j] != look[targ]) return;
        if(i == h-1 and j == w-1) {
            ans = true;
            return;
        }
        path.insert({i, j});
        for(auto [x, y] : dir4) {
            int ii = x+i, jj = j+y; 
            if(jj >= w or ii >= h) continue;
            if(jj < 0 or ii < 0) continue;
            dfs(dfs, ii, jj, (targ+1)%5, path);
        }
    };

    set<ii> path;
    dfs(dfs, 0, 0, 0, path);
    cout<<(ans ? "Yes" : "No")<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
