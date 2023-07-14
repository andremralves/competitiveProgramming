/**
 *    author: mralves 
 *    created: 01-02-2023 23:20:36       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

void solve() {
    int n,r,s;
    cin>>n>>s>>r;
    int f = s-r;
    int div = r/(n-1);
    int res = r%(n-1);
    
    cout<<f<<" ";
    for(int i=0; i<n-1; i++) {
        if(res > 0)
            cout<<div+1<<" ";
        else
            cout<<div<<" ";
        res--;
    }
    cout<<"\n";
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
