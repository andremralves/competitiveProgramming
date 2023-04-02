/**
 *    author: mralves 
 *    created: 01-04-2023 09:00:55       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define INF (long long)2e+18

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

void solve() {
    ll n, m;
    cin>>n>>m;
    ll ans = INF;
    for(ll a=1; a<=n; a++) {
        ll b = ceil(m, a);
        if(b <= n) ans = min(ans, a*b);
        if(b<=a) break;
    }
    cout<<(ans == INF ? -1 : ans)<<"\n";
}

int main ()
{
    solve();    
    return 0;
}
