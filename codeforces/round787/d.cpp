/**
 *    author: mralves 
 *    created: 26-11-2022 22:11:31       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n+1);
    vector<bool> leaf(n+1, true);
    for (ll i = 1; i <= n; i++) {
        cin>>a[i];
        leaf[a[i]] = false;
    }

    vector<vector<ll>> paths(n+1);
    vector<bool> visited(n+1, false);
    int color = 0;
    for (ll i = 1; i <= n; i++) {
        if(!leaf[i] and n != 1) continue;
        ll v = i;
        while(a[v] != v) {
            if(visited[v]) break;
            paths[i].push_back(v);
            visited[v] = true;
            v = a[v];
        }
        if(!visited[v]) {
            paths[i].push_back(v);
            visited[v] = true;
        }
        color++;
    }
    cout<<color<<"\n";
    for(auto path : paths) {
        if(path.size() == 0) continue;
        reverse(path.begin(), path.end());
        cout<<path.size()<<"\n";
        for (int j = 0; j < path.size(); j++) {
            cout<<path[j]<<(j == path.size()-1 ? "\n" : " ");
        }
    }
    cout<<"\n";
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
