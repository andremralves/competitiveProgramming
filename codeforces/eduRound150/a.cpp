/**
 *    author: mralves 
 *    created: 12-06-2023 11:34:04       
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
    if(n<=4) {
        cout<<"Bob\n";
    } else {
        cout<<"Alice\n";
    }
}
// 1 1 1 1 a
// 2 1 1 b
// 2 2 a
// 4 b
//
// 1 1 1 1 1
// 1 1 3
// 2 3 a

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}
