/**
 *    author: mralves 
 *    created: 28-01-2023 18:17:41       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

void solve() {

}

int main ()
{
    int n;
    cin>>n;
    map<string, string> mp;
    for(int i=0; i<n; i++) {
        string u, v;
        cin>>u>>v;
        mp.emplace(u, v);
    }

    set<string> visited;
    for(auto [u, v] : mp) {
        if(visited.count(u)) continue;
        set<string> parents;
        string cur = u;
        while(true) {
            visited.insert(cur);
            parents.insert(cur);
            if(mp.count(cur) == 0) break;
            cur = mp[cur];
            if(parents.count(cur)) {
                cout<<"No\n";
                return 0;
            }
        }
    }
    cout<<"Yes\n";
    return 0;
}
