/**
 *    author: mralves 
 *    created: 09-04-2023 09:01:48       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

void solve() {
    ll a, b;
    cin>>a>>b;
    ll ans = 0;
    while(a != b) {
        ll x;
        if(a < b) {
            x = ceil(b, a)-1;
            b = b-a*x;
        } else {
            x = ceil(a, b)-1;
            a = a-b*x;
        }
        ans+=x;
    }
    cout<<ans<<"\n";
}

// 3 10
// 3 7
// 3 4
// 3 1
// 2 1
// 1 1

int main ()
{
    solve();    
    return 0;
}
