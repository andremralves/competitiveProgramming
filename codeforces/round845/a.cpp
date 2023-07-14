/**
 *    author: mralves 
 *    created: 21-01-2023 11:46:43       
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
    int ans = 0;
    for(int i=1; i<n; i++) {
        if(a[i] % 2 == 0 and a[i-1] % 2 ==0) {
            ans++;
        } else if(a[i] % 2 != 0 and a[i-1] % 2 !=0) {
            ans++;
        }
    }
    cout<<ans<<"\n";
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
