/**
 *    author: mralves 
 *    created: 09-04-2023 11:14:34       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

void solve() {
    unsigned int n, l, u;
    while(cin>>n>>l>>u) {
        int ans = 0;
        for(int i=31; i>=0; i--) {
            if((n&1<<i) == 0 and ans+(1<<i) <= u) {
                ans += 1<<i;
            }
        }
        if(ans < l) {
            int tmp1 = ans;
            for(int i=0; i<32; i++) {
                if((n&(1<<i)) and tmp1+(1<<i) <= u and tmp1 < l) {
                    tmp1 += 1<<i;
                }
            }
            int tmp2 = ans;
            for(int i=31; i>=0; i--) {
                if((n&(1<<i)) and tmp2+(1<<i) <= u and tmp2 < l) {
                    tmp2 += 1<<i;
                }
            }
            if(tmp1 > u or tmp1 < l)
                ans = tmp2;
            else if(tmp2 > u or tmp2 < l)
                ans = tmp1;
            else
                ans = min(tmp1, tmp2);
        }

        if(ans < l or ans > u) {
            int mx = 0;
            int res = 0;
            for(int i=l; i<=u; i++) {
                int op = i|n;
                if(op > mx) {
                    mx = op;
                    res = i;
                }
            }
            cout<<res<<"\n";
        } else {
            cout<<ans<<'\n';
        }
    }
}

int main ()
{
    solve();    
    return 0;
}
