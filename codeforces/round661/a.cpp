/**
 *    author: mralves 
 *    created: 11-02-2023 01:24:35       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a.begin(), a.end());
    for(int i=1; i<n; i++) {
        if(abs(a[i] - a[i-1]) > 1) {
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}

int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();    
    }
    return 0;
}
