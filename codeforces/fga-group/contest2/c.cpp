/**
 *    author: mralves 
 *    created: 27-07-2023 22:59:07       
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

ll MOD = 1e9+7;
void solve() {

    int n;
    cin>>n;
    vector<int> a(n), b(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    for(int i=0; i<n; i++) {
        cin>>b[i];
    }
    sort(all(a));
    sort(b.rbegin(), b.rend());

    ll ans = 1;
    for(int i=0; i<n; i++) {
        int x = a.end() - upper_bound(all(a), b[i]);
        ans = (max(x-i, 0) * ans) % MOD;
    }
    cout<<ans<<"\n";
}

// 9 6 8 4 5 2
// 4 1 5 6 3 1

// 2 4 5 6 8 9
// 1 1 3 4 5 6

// 2 2 2 2 2 1

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}
