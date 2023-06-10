/**
 *    author: mralves 
 *    created: 10-06-2023 02:30:06       
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
    ll n, k;
    cin>>n>>k;
    vector<ll> a(n), t(n), sum0(n+1), sum1(n+1);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    for(int i=0; i<n; i++) {
        cin>>t[i];
        if(t[i]) {
            sum1[i+1] = a[i] + sum1[i];
            sum0[i+1] = sum0[i];
        } else {
            sum0[i+1] = a[i] + sum0[i];
            sum1[i+1] = sum1[i];
        }
    }


    ll f[n+1];
    f[0] = 0;
    for(int i=1; i<=n; i++) {
        if(i >= k) {
            f[i] = max(f[i-1], sum1[n] + sum0[i]-sum0[i-k]);
        }
        else
            f[i] = max(f[i-1], sum1[n] + sum0[i]);
    }
    cout<<f[n]<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
