/**
 *    author: mralves 
 *    created: 13-01-2023 16:11:04       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

int main ()
{
    int n, r;
    cin>>n>>r;
    vector<int> rel(n+1, 0);
    for(int i=0; i<r; i++) {
        int x, y; 
        cin>>x>>y;
        rel[x]++;
        rel[y]++;
    }
    int ans=0;
    for(int i=1; i<=n; i++) {
        if(rel[i]<n-1)
            ans+=n-1-rel[i];
    }
    cout<<ans/2<<"\n";
    return 0;
}
