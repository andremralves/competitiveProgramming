/**
 *    author: mralves 
 *    created: 11-02-2023 01:24:35       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;
const int LIMIT = INT_MAX;

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    int mina = LIMIT, minb = LIMIT;
    for(int i=0; i<n; i++) {
        cin>>a[i];
        mina = min(a[i], mina);
    }
    for(int i=0; i<n; i++) {
        cin>>b[i];
        minb = min(b[i], minb);
    }
    ll ans = 0;
    for(int i=0; i<n; i++) {
        int x = a[i] - mina;
        int y = b[i] - minb;
        ans += max(x, y);
    }
    cout<<ans<<"\n";
}

int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();    
    }
    return 0;
}
