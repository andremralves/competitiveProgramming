/**
 *    author: mralves 
 *    created: 01-09-2023 22:54:03       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;
using ii = pair<int, int>;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
vector<ii> dir4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
vector<ii> dir8 = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};

void solve() {
    int n;
    cin>>n;

    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    map<int, set<int>> adj;

    for(int i=0; i<n; i++) {
        adj[a[i]].insert(i);
    }

    vector<bool> used(n);
    int ans = 0;
    for(int i=0; i<n; i++) {
        if(used[i]) continue;
        int h = a[i]-1; 
        int j = i;
        while(h > 0) {
            int pos = *adj[h].upper_bound(j);
            if(adj[h].upper_bound(j) != adj[h].end()) {
                j = pos;
                adj[h].erase(pos);
                used[pos] = true;
                h--;
            } else {
                break;
            }
        }
        ans++;
    }

    cout<<ans<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
