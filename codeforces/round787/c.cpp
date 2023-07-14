/**
 *    author: mralves 
 *    created: 26-11-2022 22:11:31       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
    string s;
    cin>>s;
    ll ans = 0;
    for (ll i = 0; i < s.size(); i++) {
        if(s[i] == '0' or i == s.size()-1) {
            for (ll j = i; j >= 0; j--) {
                ans++;
                if(s[j] == '1') {
                    cout<<ans<<"\n";
                    return;
                }
            }
            cout<<ans<<"\n";
            return;
        }
    }
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
