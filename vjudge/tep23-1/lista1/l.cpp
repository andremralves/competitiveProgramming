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
    ll n; 
    cin>>n;
    cout<<(n%2== 0? "":"-")<<ceil(n, 2)<<"\n";
}

int main ()
{
    solve();    
    return 0;
}

