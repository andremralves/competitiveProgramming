/**
 *    author: mralves 
 *    created: 22-04-2023 09:03:47       
**/
#include <bits/stdc++.h>

using namespace std;
#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()
using ll = int64_t;
ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

void solve() {
    int n;
    cin>>n;
    int l = 1, r = n, m;
    while(l < r-1) {
        m = (l+r)/2;
        cout<<"? "<<m<<"\n"<<flush;
        int x; cin>>x;
        if(x == 0)
            l = m;
        else 
            r = m;
    }
    cout<<"! "<<l<<"\n"<<flush;
}

// 01111111111
// 123456789
int main ()
{
    solve();    
    return 0;
}
