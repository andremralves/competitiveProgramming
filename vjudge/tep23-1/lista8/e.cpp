/**
 *    author: mralves 
 *    created: 17-06-2023 20:14:27       
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
    ll n, m;
    cin>>n>>m;
    set<int> row, col;
    ll cnt = 0;
    for(int i=0; i<m; i++) {
        int x, y;
        cin>>x>>y;
        if(row.count(x) == 0) {
            row.insert(x); 
            cnt+=n-col.size();
        }
        if(col.count(y) == 0) {
            col.insert(y);
            cnt+=n-row.size();
        }
        cout<<n*n-cnt<<(i == m-1 ? "\n" : " ");
    }

}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
