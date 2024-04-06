/**
 *    author: mralves 
 *    created: 28-07-2023 22:45:38       
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
    string s;
    cin>>n;
    cin>>s;
    vector<int> p(n);
    for(int i=0; i<n; i++) {
        int x; cin>>x; x--;
        p[i] = x;
    }

    vector<vector<int>> cycles;
    vector<bool> used(n);
    for(int i=0; i<n; i++) {
        if(used[i]) continue;
        vector<int> cycle{i};
        used[i] = true;
        for(int cur = p[i]; cur != i; cur = p[cur]) {
            cycle.push_back(cur);
            used[cur] = true;
        }
        cycles.push_back(cycle);
    }

    ll ans = 1;
    for(auto cycle : cycles) {
        int len = (int)cycle.size();
        string sc = "";
        for(auto x: cycle) {
            sc+=s[x];
        }
        for(int i=1; i<=len; i++) {
            bool ok = true;
            for(int j=0; j<len; j++) {
                if(sc[j] != sc[(i+j)%len]) {
                    ok = false;
                    break;
                }
            }
            if(ok) {
                ans = lcm(ans, i);
                break;
            }
        }
    }
    cout<<ans<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}

