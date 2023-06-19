/**
 *    author: mralves 
 *    created: 18-06-2023 11:34:58       
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
    ll n, k, g;
    cin>>n>>k>>g;

    ll amount = 0;
    ll pay = 0;
    for(int i=0; i<2; i++) {
        ll x = ceil(g, 2) - 1;
        if(i == 1) {
            x = max(g*k-amount, (ll)0);
        } else {
            amount += x*(n-1);
        }
        ll r = x%g;
        if(r >= ceil(g, 2)) {
            pay += x +(g-r);
        } else {
            pay += x-r;
        }
        if(i == 0) {
            pay*= (n-1);
        }
    }
    cout<<g*k-pay<<"\n";
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
