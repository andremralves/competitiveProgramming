/**
 *    author: mralves 
 *    created: 09-08-2023 15:48:40       
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

    map<ii, int> mp;
    vector<ll> dp(n+1, 0);
    for(int i=1; i<=n; i++) {
        dp[i] += dp[i-1];
        string s = to_string(i);
        int fis = s[0]-'0';
        int las = s[s.size()-1]-'0';
        ii p = {fis, las};
        mp[p]++;

        ii invp = {las, fis};
        dp[i] += mp[invp]*2-(bool)(las==fis);
    }
    cout<<dp[n]<<"\n";

}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
