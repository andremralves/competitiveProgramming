/**
 *    author: mralves 
 *    created: 11-08-2023 16:11:18       
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

template <typename T>
struct Fenwick {
    int n;
    std::vector<T> a;

    Fenwick(int n = 0) {
        init(n);
    }

    void init(int n) {
        this->n = n;
        a.assign(n, T());
    }

    void add(int x, T v) {
        for (int i = x + 1; i <= n; i += i & -i) {
            a[i - 1] += v;
        }
    }

    T sum(int x) {
        auto ans = T();
        for (int i = x; i > 0; i -= i & -i) {
            ans += a[i - 1];
        }
        return ans;
    }

    T rangeSum(int l, int r) {
        return sum(r) - sum(l);
    }

    int kth(T k) {
        int x = 0;
        for (int i = 1 << std::__lg(n); i; i /= 2) {
            if (x + i <= n && k >= a[x + i - 1]) {
                x += i;
                k -= a[x - 1];
            }
        }
        return x;
    }
};

void solve() {
    ll n, d, a;
    cin>>n>>d>>a;
    vector<pair<ll,ll>> ps(n);
    for(int i=0; i<n; i++) {
        ll x, h;
        cin>>x>>h;
        ps[i] = {x, h};
    }

    sort(all(ps));

    vector<ll> xs(n), hs(n);
    for(int i=0; i<n; i++) {
        auto [x, h] = ps[i];
        xs[i] = x;
        hs[i] = h;
    }
    ll ans = 0;
    while(*max_element(all(hs)) > 0) {
        for(int i=0; i<n; i++) {
            ll x = xs[i];
            ll h = hs[i];
            if(h <= 0) continue;
            auto pos = upper_bound(all(xs), x+d*2)-xs.begin();
            for(int j=i; j<pos; j++) {
                hs[j] -= a;
            }
            ans++;
        }
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
