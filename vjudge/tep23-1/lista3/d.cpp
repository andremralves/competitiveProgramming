/**
 *    author: mralves 
 *    created: 02-05-2023 00:53:22       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

ll fact(ll a, ll n) {
    if(n == 1) return a;
    return a * fact(a-1, n-1);
}

void solve() {
    ll x;
    while(cin>>x) {
        x++;
        cout<<fact(x, 4)/4+fact(x, 3)+fact(x,2)/2<<"\n";
    }

}

int main ()
{
    //std::ios::sync_with_stdio(false);
    //std::cin.tie(nullptr);

    int t = 1;
    //cin>>t;
    while (t--) solve();
    return 0;
}
