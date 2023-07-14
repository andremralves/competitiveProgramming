/**
 *    author: mralves 
 *    created: 03-06-2023 11:28:59       
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
    int n, k;
    cin>>n>>k;
    int m = ceil(n, 2);
    vector<int> a(n+1, 0);
    a[1] = a[n] = 1;
    int cnt = 1;
    for(int i=2; i<=n; i++) {
        if(ceil(i, k) > cnt) {
            a[i] = 1;
            cnt++;
        }
    }
    reverse(all(a));
    cnt = 1;
    for(int i=2; i<=n; i++) {
        if(a[i] == 1) cnt++;
        if(ceil(i, k) > cnt) {
            a[i] = 1;
            cnt++;
        }
    }

    int ans = 0;
    for(int i=0; i<n; i++) {
        if(a[i] == 1) ans++;
    }

    cout<<ans<<"\n";
}
// 1 0 0 0 0 0 0 0 1

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}
