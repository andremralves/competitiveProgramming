/**
 *    author: mralves 
 *    created: 28-01-2023 18:17:41       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

const ll MX = 10e15;

void solve() {
    string s;
    cin>>s;
    reverse(s.begin(), s.end());
    ll ans = 0;
    ll pot = 1;
    for(int i=0; i<(int)s.size(); i++) {
        ans += (s[i]-'A'+1) * pot;
        pot *= 26;
    }
    cout<<ans<<"\n";
}

int main ()
{
    solve();
    return 0;
}
