/**
 *    author: mralves 
 *    created: 09-09-2023 12:44:59       
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

    string ans = "";
    for(int i=0; i<=n; i++) {
        bool ok = false;
        for(int j=1; j<=9; j++) {
            if(n%j == 0 and i%(n/j) == 0) {
                ok = true;
                ans += j + '0';
                break;
            }
        }
        if(!ok) {
            ans += '-';
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
