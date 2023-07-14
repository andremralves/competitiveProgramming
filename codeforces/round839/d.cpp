/**
 *    author: mralves 
 *    created: 18-12-2022 11:34:00       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n;i++) cin>>a[i];
    for(int i=0; i<n-1;i++) {
        cout<<(a[i]+a[i+1])/2<<"\n";
    }
    return;
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
