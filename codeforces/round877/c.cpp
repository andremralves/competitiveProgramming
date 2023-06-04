/**
 *    author: mralves 
 *    created: 04-06-2023 16:10:11       
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
    if(m%2 == 0) {
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=m; j++) {
                cout<<m*(i-1)+j<<" ";
            }
            cout<<"\n";
        }
    } else if(n%2 == 0) {
        int val = 1;
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=m; j++) {
                cout<<(val%(n*m) == 0 ? n*m : val%(n*m))<<" ";
                val += n;
            }
            val += 1;
            cout<<"\n";
        }
    } else {
        int val = 1;
        vector<int> save;
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=m; j++) {
                cout<<(val%(n*m) == 0 ? n*m : val%(n*m))<<" ";
                if(j < m)
                    val++;
                else {
                    val = val + m + 1;
                }
            }
            cout<<"\n";
        }
    }
}
// 5 5
// 1 2 3 4 5
// 7 8 9 10 11
// 13 14 15 16 17
// 19 20 21 22 23
// 18 6  25 12 24
// 25 6 12 18 24 
//
//
// 1 2 3 4 5
// 11 12 13 14 15
// 21 22 23 24 25
// 6 7 8 9 10
// 16 17 18 19 20
//

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin>>t;
    while (t--) {
        solve();
        if(t != 0) {
            cout<<"\n";
        }
    }
    return 0;
}
