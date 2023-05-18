/**
 *    author: mralves 
 *    created: 16-05-2023 23:22:56       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

void solve() {
    int n;
    cin>>n;
    for(int i=1; i<n; i++) {
        if(n%i == 0) {
            cout<<i<<" "<<n-i<<"\n";
            break;
        }
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

