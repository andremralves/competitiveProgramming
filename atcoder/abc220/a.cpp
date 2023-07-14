/**
 *    author: mralves 
 *    created: 06-05-2023 09:07:55       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    for(int i=a; i<=b; i++) {
        if(i%c == 0) {
            cout<<i<<"\n";
            return;
        }
    }
    cout<<"-1\n";
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
