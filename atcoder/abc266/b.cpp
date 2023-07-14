/**
 *    author: mralves 
 *    created: 14-12-2022 11:20:48       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {

}

int main ()
{
    ll n;
    ll target = 998244353;
    cin>>n;
    
    ll a = n/target;
    if(n > 0) {
        cout<<n-(a*target)<<"\n";
        return 0;
    } else {
        if(n%target != 0)
            cout<<(-a+1) * target + n<<"\n";
        else
            cout<<(-a) * target + n<<"\n";
    }
    return 0;
}
