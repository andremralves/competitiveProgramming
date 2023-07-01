/**
 *    author: mralves 
 *    created: 30-06-2023 22:12:25       
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
    int n, q;
    cin>>n>>q;
    vector<int> locations(n);
    for(int i=0; i<n; i++) {
        cin>>locations[i];
    }
    sort(all(locations));
    for(int i=0; i<q; i++) {
        int a, b;
        cin>>a>>b;
        auto up = upper_bound(all(locations), b);
        auto lo = lower_bound(all(locations), a);
        cout<<up-lo<<"\n";
    }
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    string name = "haybales";
	if (!name.empty()) {
		freopen((name + ".in").c_str(), "r", stdin);  // see Input & Output
		freopen((name + ".out").c_str(), "w", stdout);
	}

    int t = 1;
    while (t--) solve();
    return 0;
}
