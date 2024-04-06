/**
 *    author: mralves 
 *    created: 26-09-2023 11:33:14       
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
    ll n, k, x;
    cin>>n>>k>>x;
    
    if((n+1)*n/2 - ((n-k)+1)*(n-k)/2 < x) {
        cout<<"NO\n";
    } else if((k+1)*k/2 > x){
        cout<<"NO\n";
    } else {
        cout<<"YES\n";
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
