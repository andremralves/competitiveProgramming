/**
 *    author: mralves 
 *    created: 26-11-2022 22:11:31       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
    int a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
    int res = max(x-a, 0) + max(y-b, 0) -c;
    cout<<(res<=0 ? "YES\n" : "NO\n");
}

int main (int argc, char *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();    
    }
    return 0;
}
