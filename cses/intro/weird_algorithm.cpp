/**
 *    author: mralves 
 *    created: 09-05-2023 23:13:26       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

void solve() {
    ll n; 
    cin>>n;
    cout<<n<<" ";
    while(n != 1) {
        if(n%2) {
            n = n*3+1;
        } else {
            n /= 2;
        }
        cout<<n<<" ";
    }
    cout<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    //cin>>t;
    while (t--) solve();
    return 0;
}
