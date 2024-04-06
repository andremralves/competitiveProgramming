/**
 *    author: mralves 
 *    created: 22-09-2023 21:34:48       
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

    vector<int> a(n), h(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    for(int i=0; i<n; i++) {
        cin>>h[i];
    }


    vector<int> dp(n);
    int ans = 0, cnt = 0;
    dp[0] = a[0] > k ? 0 : a[0];
    for(int i=1; i<n; i++) {
        if(h[i]%h[i-1] == 0) {
            cnt++;
        } else {
            ans = max(ans, cnt);
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
