/**
 *    author: mralves 
 *    created: 27-06-2023 15:17:47       
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
    vector<ii> ts;
    for(int i=0; i<n; i++) {
        int a, b;
        cin>>a>>b;
        ts.push_back({a, 1});
        ts.push_back({b, -1});
    }

    sort(all(ts));

    int ans = 0, cur = 0;
    for(auto t : ts) {
        cur += t.second;
        ans = max(ans, cur);
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

