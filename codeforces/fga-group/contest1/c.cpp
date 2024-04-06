/**
 *    author: mralves 
 *    created: 25-07-2023 19:16:35       
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

ll base = 26;
void solve() {
    ll n;
    cin>>n;
    ll ans = base;
    ll sum = 11;
    for(int i=4; i<n; i++) {
        ans += sum;
        sum += 2;
    }
    cout<<ans<<"\n";
    n -= 5;
    ll an = 11 + (n-1) * 2;
    cout<<base+n/2*(11+an)<<"\n";
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
