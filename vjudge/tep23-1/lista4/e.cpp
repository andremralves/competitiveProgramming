/**
 *    author: mralves 
 *    created: 16-05-2023 02:41:51       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

void solve() {
    long double n, p;
    while(cin>>n>>p) {
        cout<<pow(p, 1.0/n)<<"\n";
    }
}

int main ()
{
    int t = 1;
    //cin>>t;
    cout<<setprecision(0)<<fixed;
    while (t--) solve();
    return 0;
}

