/**
 *    author: mralves 
 *    created: 13-05-2023 09:04:23       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

void solve() {
    int h, w, t;
    cin>>h>>w>>t;
    vector<vector<int>> mat(h, vector<int>(w));
    for(int i=0; i<h; i++) {
        for(int j=0; j<w; j++) {
            cin>>mat[i][j];
        }
    }

    queue<pair<int, int>> que;
    while(!que.empty())
    auto dfs = [&](int i, int j, auto &&dfs) {
        if(i+1 < h and i-1 >=0 and j+1 < w and j-1 >= 0) return;
        dfs(i+1, j);
        dfs(i-1, j);
        dfs(i, j+1);
        dfs(i, j+1);
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
