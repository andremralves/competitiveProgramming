#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main ()
{
    int n, k; 
    cin>>n>>k;

    //vector<int> a(n), dp(n, INT_MAX);
    vector<int> a(n), dp(n);
    for(int i=0; i<n; i++) { cin>>a[i]; }

    //dp[0] = 0;
    //dp[1] = abs(a[0]-a[1]);
    //for(int i=0; i<n; i++) {
    //    for(int j=1; j<=k; j++) {
    //        if(i+j < n) dp[i+j] = min(dp[i+j], dp[i] + abs(a[i] - a[i+j]));
    //    }
    //}

    for(int i=1; i<n; i++) {
        dp[i] = dp[i-1] + abs(a[i]-a[i-1]);
        for(int j=2; j<=k; j++) {
            if(i-j < 0) break;
            dp[i] = min(dp[i], dp[i-j] + abs(a[i]-a[i-j]));
        }
    }

    cout<<dp[n-1]<<"\n";
    return 0;
}

