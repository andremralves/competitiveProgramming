/**
 *    author: mralves 
 *    created: 07-05-2023 00:22:07       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}


void solve() {
    int n, m;
    cin>>n>>m;
    vector<vector<int>> a(n, vector<int>(m));
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>a[i][j];
        }
    }

    vector<vector<bool>> used(n, vector<bool>(m, false));
    auto dfs = [&](int i, int j, int & sum, auto &&dfs) {
        if(i >= n or i < 0 or j>=m or j< 0) return;
        if(a[i][j] == 0 or used[i][j] == true) return;
        used[i][j] = true;
        sum+= a[i][j];
        dfs(i+1, j, sum, dfs);
        dfs(i-1, j, sum, dfs);
        dfs(i, j+1, sum, dfs);
        dfs(i, j-1, sum, dfs);
    };
    
    int ans = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(!used[i][j]) {
                int sum = 0;
                dfs(i, j, sum, dfs);
                ans = max(sum, ans);
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
    cin>>t;
    while (t--) solve();
    return 0;
}
