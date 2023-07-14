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
    vector<ll> a(3);
    for(int i=0; i<3; i++) cin>>a[i];
    char c;
    cin>>c;
    ll ans = 0;
    if(c == 'A') {
        ans += a[0];
        ans += a[1]*3/2;
        ans += a[2]*5/2;
    } else if(c == 'B') {
        ans += a[1];
        ans += a[0]*2/3;
        ans += a[2]*10/6;
    } else {
        ans += a[2];
        ans += a[1]*3/2;
        ans += a[0]*2/5;
        ans += a[1]*6/10;
    }
    cout<<ans<<"\n";
}
// 1 2 3
// A

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
