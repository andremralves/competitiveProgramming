#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main ()
{
    int n; 
    cin>>n;

    vector<int> a(n), dp(n, INT_MAX);
    for(int i=0; i<n; i++) { cin>>a[i]; }

    dp[0] = 0;
    dp[1] = abs(a[0]-a[1]);
    for(int i=0; i<n; i++) {
        if(i+1 < n) dp[i+1] = min(dp[i+1], dp[i] + abs(a[i] - a[i+1]));
        if(i+2 < n) dp[i+2] = min(dp[i+2], dp[i] + abs(a[i] - a[i+2]));
    }

    cout<<dp[n-1]<<"\n";
    return 0;
}
