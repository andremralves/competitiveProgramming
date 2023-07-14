/**
 *    author: mralves 
 *    created: 25-11-2022 22:11:10       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
    ll n, x;
    cin>>n>>x;
    if(n%x != 0) {
        cout<<-1<<"\n";
        return;
    }
    vector<ll> ans(n+1);
    iota(ans.begin(), ans.end(), 0);
    ans[1] = x;
    ans[n] = 1;
    while(x<n)
        for (int i = x*2; i <= n; i+=x) {
            if(n%i == 0) {
                ans[x] = i;
                x = i;
                break;
            }
        }
    for (int i = 1; i <= n; i++) {
        cout<<ans[i]<<(i == n ? "\n":" ");
    }
}

int main (int argc, char *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();    
    }
    return 0;
}
