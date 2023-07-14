/**
 *    author: mralves 
 *    created: 30-12-2022 11:34:02       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
    int n, m;
    cin>>n>>m;
    priority_queue<ll, vector<ll>, greater<>> pq;
    for(int i=0; i<n; i++) {
        ll x;
        cin>>x;
        pq.push(x);
    }

    for(int i=0; i<m; i++) {
        ll x;
        cin>>x;
        pq.pop();
        pq.push(x);
    }

    ll ans = 0;
    while(n--) {
        ans += pq.top();
        pq.pop();
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

