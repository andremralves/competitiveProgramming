/**
 *    author: mralves 
 *    created: 03-09-2023 23:04:22       
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

ll MOD = 998244353;

long long binpow(long long a, long long b) {
    a %= MOD;
    long long res = 1;
    while(b > 0) {
        if(b & 1)
            res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

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

    int m; cin>>m;
    vector<int> c(m), d(m);
    for(int i=0; i<m; i++) {
        cin>>c[i];
    }
    for(int i=0; i<m; i++) {
        cin>>d[i];
    }

    map<int, int> ma, mc;
    set<int> all;

    for(int i=0; i<n; i++) {
        ma[a[i]] = b[i];
        all.insert(a[i]);
    }

    for(int i=0; i<m; i++) {
        mc[c[i]] = d[i];
        all.insert(c[i]);
    }

    bool ok = true;
    int power = 0;
    for(auto p: all) {
        if(ma.count(p) == 0 or ma[p] < mc[p]) {
            ok = false;
            break;
        }
        if(ma[p] > mc[p]) power++;
    }

    if(!ok) cout<<"0\n";
    bool ok = true;
    else cout<<binpow(2, power)<<"\n";

}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
