/**
 *    author: mralves 
 *    created: 22-07-2023 09:40:15       
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
    double r, v, i, j;
    cin>>r>>v>>i>>j;
    int mx = 52*70;

    int ans = -1;
    double p = 0;
    for(int k=0; k<mx; k++) {
        p += r + p*i/100; 
        v = v - v*j/100;
        if(p >= v) {
            ans = k+1;
            break;
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
