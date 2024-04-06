/**
 *    author: mralves 
 *    created: 03-08-2023 13:50:38       
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
    ll n, m;
    cin>>n>>m;

    vector<ll> a(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    ll lc = 1;
    for(int i=0; i<n; i++) {
        lc = lcm(lc, a[i]/2);
        if(lc>m) {
            cout<<"0\n";
            return;
        }
    }
    for(int i=0; i<n; i++) {
        if(lc%a[i] == 0) {
            cout<<"0\n";
            return;
        }
    }
    cout<<1 + (m-lc)/(lc*2)<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
