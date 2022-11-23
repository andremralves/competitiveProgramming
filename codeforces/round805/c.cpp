/**
 *    author: mralves 
 *    created: 23-11-2022 03:28:28       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
    ll n, m;
    cin>>n>>m;    
    map<ll, vector<ll>> mp;
    for (ll i = 0; i < n; i++) {
        int x;
        cin>>x;
        if(mp.find(x) == mp.end()) {
            mp.insert({x, {i}});
        } else {
            mp[x].push_back(i);
        }
    }
    for (ll i = 0; i < m; i++) {
        ll x, y;
        cin>>x>>y; 
        ll j, k;
        if(mp.find(x) == mp.end() or mp.find(y) == mp.end()){
            cout<<"No"<<"\n";
            continue;
        };
        j = *mp[x].begin();
        k = *(mp[y].end()-1);
        if(k-j >= 0) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}

int main (int argc, char *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();    
    }
    return 0;
}
