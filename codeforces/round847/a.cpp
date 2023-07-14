/**
 *    author: mralves 
 *    created: 01-02-2023 23:20:36       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)


using namespace std;
using ll = int64_t;

const string PI = "314159265358979323846264338327";

void solve() {
    string s;
    cin>>s; 
    int ans = 0;
    for(int i=0; i<s.size(); i++) {
        if(s[i] != PI[i]) break;
        ans++;
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
