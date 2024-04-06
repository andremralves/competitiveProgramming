/**
 *    author: mralves 
 *    created: 09-08-2023 15:48:40       
**/
#include <bits/stdc++.h>
#include <atcoder/modint>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using namespace atcoder;
using ll = int64_t;
using ii = pair<int, int>;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
vector<ii> dir4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
vector<ii> dir8 = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};

ll MOD = 1e9+7;
using mint = modint1000000007;

mint gcd(mint a, mint b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}

void solve() {
    int n;
    cin>>n;
    
    vector<mint> a(n);
    mint lc = 1;
    for(int i=0; i<n; i++) {
        cin>>a[i];
        lc = (a[i] * lc) / gcd(a[i], lc.val());
    }
    
    mint ans = 0;
    for(int i=0; i<n; i++) {
        ans += lc/a[i];
    }
    cout<<ans.val()<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}

