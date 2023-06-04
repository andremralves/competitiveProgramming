/**
 *    author: mralves 
 *    created: 03-06-2023 08:58:49       
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
    int n, d;
    cin>>n>>d;
    vector<pair<double, double>> vdd(n);
    for(int i=0; i<n; i++) {
        int x, y;
        cin>>x>>y;
        vdd[i] = {x, y};
    }

    vector<bool> infected(n);
    vector<vector<int>> adj(n);
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            double dis = sqrt(pow(abs(vdd[i].first-vdd[j].first), 2) + pow(abs(vdd[i].second-vdd[j].second), 2));
            if(dis <= d) {
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }

    vector<bool> used(n);
    function<void(int)> dfs = [&](int pos) {
        used[pos] = true;
        for(auto x: adj[pos]) {
            if(!used[x]) {
                if(infected[pos]) {
                    infected[x] = true;
                }
                dfs(x);
            }
        }
    };

    infected[0] = true;
    dfs(0);

    for(auto x: infected) {
        if(x) {
            cout<<"Yes\n";
        } else {
            cout<<"No\n";
        }
    }
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
