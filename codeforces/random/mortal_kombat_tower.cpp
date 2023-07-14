/**
 *    author: mralves 
 *    created: 17-06-2023 06:09:10       
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
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    int dp[n][2];

    dp[0][0] = dp[0][1] = a[0];

    for(int i=1; i<n; i++) {
        for(int j=0; j<2; j++) {
            int x = 0;
            if(j == 0 and a[i] == 1) x = 1;
            for(int k=0; k<2; k++) {
                dp[i][j] = dp[i-1][k];
            }
        }
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
