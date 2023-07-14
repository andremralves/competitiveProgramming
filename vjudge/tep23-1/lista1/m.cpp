/**
 *    author: mralves 
 *    created: 09-04-2023 11:29:00       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

void solve() {
    ll n, k; 
    cin>>n>>k;
    ll a = ceil(k, n);
    ll h = a*2/2;
    cout<<h<<"\n";
}

int main ()
{
    solve();    
    return 0;
}

