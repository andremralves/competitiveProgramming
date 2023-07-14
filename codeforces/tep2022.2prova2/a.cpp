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
    int size[4];
    int n;
    cin>>n;
    vector<set<string>> id(121);
    for(int i=0; i<n; i++) {
        int x;
        string y;
        
        cin>>x>>y;
        id[x].insert(y);
    }

    int ans = 0;
    for(int i=18; i<121; i++) {
        ans+=id[i].size();
    }

    cout<<ans<<"\n";

    return 0;
}
