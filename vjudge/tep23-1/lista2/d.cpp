/**
 *    author: mralves 
 *    created: 28-04-2023 21:51:12       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

void solve() {
    int n, k;
    while(cin>>n>>k) {
        int x = n;
        int sum = 0;
        while(x/k > 0) {
            int res = x%k;
            x /= k;
            sum+=x;
            x += res;
        }
        cout<<sum+n<<"\n";
    }
}

int main ()
{
    //std::ios::sync_with_stdio(false);
    //std::cin.tie(nullptr);

    int t = 1;
    //cin>>t;
    while (t--) solve();
    return 0;
}
