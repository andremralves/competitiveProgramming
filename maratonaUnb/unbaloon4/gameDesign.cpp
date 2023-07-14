#include <bits/stdc++.h>

using namespace std;

const int MX = 10e5;

int dp[MX];

int main() {
    int n;
    cin>>n;

    vector<int> a(n*n);
    for(int i=0; i<n; i++) {
        for(int j=0;j<n;j++) {
            cin>>a[j+n*i];
            dp[j+n*i] = a[j+n*i];
        }
    }
    
    int ans = dp[0];
    for(int i=0; i<n; i++) {
        for(int j=0;j<n;j++) {
            if(i+1 < n) {
                dp[j+n*(i+1)] = max(dp[j+n*i]+a[j+n*(i+1)], dp[j+n*(i+1)]);
                ans = max(dp[j+n*(i+1)], ans);
            }
            if(j+1 < n) {
                dp[j+1+n*i] = max(dp[j+n*i]+a[j+1+n*i], dp[j+1+n*i]);
                ans = max(dp[j+1+n*i], ans);
            }
        }
    }
    cout<<ans<<"\n";

    return 0;
}
