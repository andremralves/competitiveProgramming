/**
 *    author: mralves 
 *    created: 21-01-2023 11:46:43       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define MOD 1000000007

using namespace std;
using ll = int64_t;

void solve() {
    int n;
    cin>>n;
    ll perm = 1;
    for(int i=1; i<=n; i++) {
        perm = (perm *i)%MOD;
    }
    cout<<perm*(n-1)%MOD<<"\n";
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
