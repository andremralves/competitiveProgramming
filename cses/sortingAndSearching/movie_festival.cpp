/**
 *    author: mralves 
 *    created: 27-06-2023 23:07:17       
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
    vector<ii> intervals;
    for(int i=0; i<n; i++) {
        int a, b;
        cin>>a>>b;
        intervals.emplace_back(b, a);
    }
    sort(all(intervals));

    int ans = 0;
    int last_e = 0;
    for(auto [e, s] : intervals) {
        if(s >= last_e) {
            ans++;
            last_e = e; 
        }
    }
    cout<<ans<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    //cin>>t;
    while (t--) solve();
    return 0;
}
