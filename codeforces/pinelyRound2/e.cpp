/**
 *    author: mralves 
 *    created: 30-08-2023 23:21:35       
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
    int n, m, k;
    cin>>n>>m>>k;

    vector<int> hs(n);
    for(int i=0; i<n; i++) {
        cin>>hs[i];
    }

    map<int, int> mp;
    for(int i=0; i<m; i++) {
        int a, b;
        cin>>a>>b;
        a--, b--;
    }

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
