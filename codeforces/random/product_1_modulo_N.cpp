/**
 *    author: mralves 
 *    created: 17-06-2023 04:28:31       
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
    vector<bool> ok(n);
    ll prod = 1;
    for(int i=1; i<n; i++) {
        if(gcd(n, i) == 1) {
            prod = prod * i % n;
            ok[i] = true;
        }
    }

    if(prod != 1)
        ok[prod] = 0;

    cout<<count(all(ok), 1)<<"\n";
    for(int i=1; i<n; i++) {
        if(ok[i]) {
            cout<<i<<" ";
        }
    }
    cout<<"\n";

}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
