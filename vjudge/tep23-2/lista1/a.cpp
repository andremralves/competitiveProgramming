#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin>>n>>m;

    vector<int> h(n);
    for(int i=0; i<n; i++) {
        cin>>h[i];
    }
    
    vector<vector<int>> adj(n);
    for(int i=0; i<m; i++) {
        int a, b;
        cin>>a>>b;
        a--; b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int ans = 0;
    for(int i=0; i<n; i++) {
        bool ok = true;
        for(auto x: adj[i]) {
            if(h[i] <= h[x]) {
                ok = false;
                break;
            }
        }
        if(ok) {
            ans++;
        }
    }
    cout<<ans<<"\n";
    return 0;
}
