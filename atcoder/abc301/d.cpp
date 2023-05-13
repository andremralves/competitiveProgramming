/**
 *    author: mralves 
 *    created: 13-05-2023 09:04:23       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

void solve() {
    string s;
    ll n;
    cin>>s>>n;
    ll size = s.size();
    ll mask = 1LL<<(size-1);
    ll total = 0;
    for(int i=0; i<size; i++) {
        if(s[i] == '1')
            total += mask;
        mask >>= 1;  
    }
    mask = 1LL<<(size-1);
    for(int i=0; i<size; i++) {
        if(s[i] == '?' and total + mask <= n) {
            total += mask;
        }
        mask >>= 1;
    }
    if(total > n) 
        cout<<"-1\n";
    else
        cout<<total<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
