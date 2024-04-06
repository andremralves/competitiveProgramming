/**
 *    author: mralves 
 *    created: 10-09-2023 10:48:59       
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
    ll n, k, a, b;
    cin>>n>>k>>a>>b;
    a--, b--;

    vector<pair<ll, ll>> ps;
    for(int i=0; i<n; i++) {
        int x, y;
        cin>>x>>y;
        ps.emplace_back(x, y);
    }

    if(a < k) {
        if(b < k) {
            cout<<"0\n";
        } else {
            // nearest maj from b
            ll mi = 1e10+5;
            for(int i=0; i<k; i++) {
                auto [x, y] = ps[b];
                auto [x1, y1] = ps[i];
                mi = min(abs(x-x1)+abs(y-y1), mi);
            };
            cout<<mi<<"\n";
        }
    } else {
        if(b < k) {
            ll mi = 1e10+5;
            pair<ll, ll> city;
            for(int i=0; i<k; i++) {
                auto [x, y] = ps[a];
                auto [x1, y1] = ps[i];
                mi = min(abs(x-x1)+abs(y-y1), mi);
            };
            cout<<mi<<"\n";
        } else {
            ll mi = 1e10+5;
            for(int i=0; i<k; i++) {
                auto [x, y] = ps[a];
                auto [x1, y1] = ps[i];
                mi = min(abs(x-x1)+abs(y-y1), mi);
            };
            ll mi1 = 1e10+5;
            for(int i=0; i<k; i++) {
                auto [x, y] = ps[b];
                auto [x1, y1] = ps[i];
                mi1 = min(abs(x-x1)+abs(y-y1), mi1);
            };
            auto [x, y] = ps[a];
            auto [x1, y1] = ps[b];
            ll mi2 = abs(x-x1)+abs(y-y1);
            cout<<min(mi2, mi1+mi)<<"\n";
        }
    }
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
