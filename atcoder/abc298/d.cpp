/**
 *    author: mralves 
 *    created: 15-04-2023 08:52:56       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

const int mod = 998244353;
const int N = 6e5 + 10;

int main ()
{
    int Q;
    cin>>Q;
    deque<int> dq(1, 1);
    vector<int> f(N);
    f[0] = 1, f[1] = 10;
    ll ans = 1;
    int size = 1;
    while(Q--) {
        int x, y;
        cin>>x;
        if(x == 1) {
            cin>>y;
            dq.push_back(y);
            while(size < (int)dq.size()) {
                f[size+1] = f[size] * 10 % mod;
                size++;
            }
            ans = (ans*10+y) % mod;
        } else if(x == 2) {
            ans = (ans - f[dq.size()-1] * dq.front() % mod) % mod;
            dq.pop_front();
        } else {
            cout<<ans<<"\n";
        }
    }
    return 0;
}
