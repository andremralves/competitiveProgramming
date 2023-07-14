/**
 *    author: mralves 
 *    created: 25-06-2023 12:52:20       
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

ll dp[5005][2];
void solve() {
    int n;
    cin>>n;
    vector<int> a(n), b(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }


    dp[0][0] = 0;
    dp[0][1] = 0;

    for(int i=1; i<n; i++) {
        for(int j=0; j<n; j++) {
            dp[i][1] = dp[i-1][0];
        }
    }

    cout<<max(dp[n-1][0], dp[n-1][1])<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
