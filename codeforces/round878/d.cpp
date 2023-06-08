/**
 *    author: mralves 
 *    created: 06-06-2023 11:35:40       
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
    int n; cin>>n;
    vector<ll> a(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    sort(all(a));
    ll lo = 0, hi = 2e9;
    while(lo<hi) {
        ll mid = (hi+lo)/2;
        int pos = 0;
        bool ok = false;
        for(int i=0; i<3; i++) {
            pos = upper_bound(all(a), mid*2 + a[pos]) - a.begin();
            if(pos == n) {
                ok = true;
                break;
            }
        }
        if(ok) {
            hi = mid;
        } else {
            lo = mid+1; 
        }
    }
    cout<<lo<<"\n";
}
// 1 2 4 5 30 60
//
// 1 3 10 11 15 17
//
// 1 4 4 14 19 37 59 73 98

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}
