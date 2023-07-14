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

/*

   4 1
   1 2 3 4

*/

void solve() {
    int n, m;
    cin>>n>>m;
    vector<vector<int>> vv(51, vector<int>(51, 0));
    vector<vector<int>> cnt(51, vector<int>(51, 0));
    for(int i=0; i<m; i++) {
        for(int j=0; j<n;j++) {
            cin>>vv[i][j];
        }
    }

    for(int i=0; i<m; i++) {
        for(int j=0; j<n;j++) {
            for(int k=0; k<n; k++) {
                if(abs(k-j) > 1) {
                    int p1 = vv[i][j];
                    int p2 = vv[i][k];
                    cnt[p1-1][p2-1]++;
                    cnt[p2-1][p1-1]++;
                }
            }
        }
    }

    int ans = 0;
    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            if(cnt[i][j] == m*2) {
                ans++;
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
    //cin>>t;
    while (t--) solve();
    return 0;
}
