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
    double g, d, r;
    cin>>g>>d>>r;
    double mult = 1000/g;
    if(d == 0) {
        cout<<mult*r<<"\n";
    } else {
        double ans = (r * 100 / (100-d)*1000/g);
        cout<<ans<<"\n";
    }
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    cout<<setprecision(15);

    int t = 1;
    while (t--) solve();
    return 0;
}
