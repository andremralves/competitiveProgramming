/**
 *    author: mralves 
 *    created: 30-11-2022 23:26:17       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
    ll n, k;
    string s;
    cin>>n>>k;
    cin>>s;

    // prefix sum
    vector<int> sum(n+1);
    for (int i = 1; i <= n; i++) {
        sum[i] = sum[i-1] + int(s[i-1] == 'W');
    }
    int ans = INT_MAX;
    for (int i = k; i <= n; i++) {
        ans = min(ans, sum[i] - sum[i-k]);
    }
    cout<<ans<<"\n";
}

int main (int argc, char *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();    
    }
    return 0;
}
