/**
 *    author: mralves 
 *    created: 18-09-2023 11:36:46       
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
    int n, k;
    cin>>n>>k;

    vector<int> a(n);
    vector<vector<int>> where(k+1);
    for(int i=0; i<n; i++) {
        cin>>a[i];
        where[a[i]].push_back(i);
    }

    int prev = -1;
    vector<int> ans;
    for(int i=1; i<=k; i++) {
        int mi = n;
        for(auto j : where[i]) {
            if(prev == -1) {
                break; 
            }
            auto up = upper_bound(all(where[prev]), j);
            auto bef = up-1;
            int x, y;
            if(up == where[prev].end()) y = n+1;
            else y = *up;
            if(up == where[prev].begin()) x = -1;
            else x = *bef;
            mi = max(j-x, y-j);
        }
        prev = i;
        if(where[i].size() == 0)

        ans.push_back(mi+mi);
    }
    for(auto x: ans) {
        cout<<x<<" ";
    }
    cout<<"\n";
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
