/**
 *    author: mralves 
 *    created: 07-09-2023 11:32:36       
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
    int n;
    cin>>n;

    vector<ii> ps;
    for(int i=0 ; i<n; i++) {
        int a, b;
        cin>>a>>b;
        ps.emplace_back(a, b);
    }

    sort(all(ps));
    int mi = 1e6;

    for(int i=0; i<n; i++) {
        mi = min(ps[i].first+(int)ceil(ps[i].second, 2)-1, mi);
    }
    cout<<mi<<"\n";
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
