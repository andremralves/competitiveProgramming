/**
 *    author: mralves 
 *    created: 01-04-2023 09:00:55       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=1; i<n; i++) {
        if(s[i] == s[i-1]) {
            cout<<"No\n";
            return;
        }
    }
    cout<<"Yes\n";
}

int main ()
{
    solve();    
    return 0;
}
