/**
 *    author: mralves 
 *    created: 30-06-2023 23:06:44       
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
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    sort(all(a));

    if(n == 1) {
        cout<<a[0]+k<<"\n";
        return;
    }

    int m = n/2;
    while(k > 0) {
        auto up = upper_bound(all(a), a[m]);
        auto lo = a.begin() + m;

        ll x = (up - lo) * ((*up)-(*lo));
        if(x > k or up == a.end()) x = k;
        int y = x/(up-lo);
        if(y == 0) break;
        for(auto it = lo; it<up; it++) {
            (*it) += y;
            k -= y;
        }
    }

    cout<<a[m]<<"\n";

}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
