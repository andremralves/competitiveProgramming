/**
 *    author: mralves 
 *    created: 01-07-2023 09:01:05       
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
    int n, m;
    cin>>n>>m;

    vector<string> a(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    vector<string> plates(m);
    vector<int> values(m+1);
    for(int i=0; i<m; i++) {
        cin>>plates[i];
    }

    for(int i=0; i<=m; i++) {
        cin>>values[i];
    }

    int ans = 0;
    for(int i=0; i<n; i++) {
        int pos = find(all(plates), a[i]) - plates.begin();
        if(pos == m) {
            ans += values[0];
        } else {
            ans += values[pos+1];
        }
    }
    cout<<ans<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
