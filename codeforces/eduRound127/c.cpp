#include <algorithm>
#include <bits/stdc++.h>
#include <numeric>

using namespace std;

void solve() {
    long int n, x;
    cin>>n>>x;
    long int arr[n];
    for (long int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    sort(arr, arr + n);
    long int sum = 0;
    sum = accumulate(arr, arr+n, sum);
    int prevDay = -1;
    long long int ans = 0;
    for (int i = n-1; i>= 0; i--) {
        long int curDay = (x-sum>=0) ? (x-sum)/(i+1) : -1;
        ans += (i+1)*(curDay-prevDay);
        prevDay=curDay;
        sum -= arr[i];
    }
    cout<<ans<<"\n";
}
int main (int argc, char *argv[])
{
    int t; 
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
