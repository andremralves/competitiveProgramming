/**
 *    author: mralves 
 *    created: 11-06-2023 22:37:47       
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

const ll inf = 2e9;
ll dp(vector<vector<ll>> mat, int i, int j, vector<bool> used) {
    if(i == (int)mat.size()-1) {
        return mat[i][find(all(used), 0) - used.begin()];
    }
    used[j] = true;
    ll ans = 0;
    for(auto x : mat[i]) {
        if(!used[x])
            ans = max(ans, min(mat[i][x],dp(mat, i+1, x, used)));
    }
    return ans;
}

void solve() {
    ll n, k, p;
    cin>>n>>k>>p;
    vector<int> a(n), b(k);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<k; i++) cin>>b[i];

    vector<vector<ll>> mat(n, vector<ll>(k));
    for(int i=0; i<n; i++) {
        for(int j=0; j<k; j++) {
            mat[i][j] = (abs(abs(a[i]-b[j])-p));
        }
    }
    vector<bool> used(k, false);
    ll ans = inf;
    for(int i=0; i<k; i++) {
        ans = min(ans,dp(mat, 0, i, used));
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
