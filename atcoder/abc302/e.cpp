/**
 *    author: mralves 
 *    created: 20-05-2023 09:08:23       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

void solve() {
    int n, q;
    cin>>n>>q;
    vector<set<ll>> adj(n+1);
    int cnt = n;
    while(q--) {
        int x, u, v;
        cin>>x;
        if(x == 1) {
            cin>>u>>v;
            //cout<<"u: "<<u<<" v: "<<v<<"\n";
            adj[u].insert(v);
            cnt -= adj[u].size() == 1 ? 1: 0;
            adj[v].insert(u);
            cnt -= adj[v].size() == 1 ? 1: 0;
            cout<<cnt<<"\n";
        } else {
            cin>>u;
            if(adj[u].size() == 0) {
                cout<<cnt<<"\n";
                continue;
            }
            for(auto edge : adj[u]) {
                adj[edge].erase(u);
                if(adj[edge].size() == 0)
                    cnt++;
            }
            adj[u].clear();
            cnt++;
            cout<<cnt<<"\n";
        }
    }

}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    //cin>>t;
    while (t--) solve();
    return 0;
}
