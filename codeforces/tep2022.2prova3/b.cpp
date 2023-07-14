/**
 *    author: mralves 
 *    created: 10-02-2023 16:10:56       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

int main ()
{
    ll m,n;
    cin>>m>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    ll ans = 0;
    ll sum = 0;
    //if(sum < 0) {
    //    ans = -sum;
    //    sum = 0;
    //}
    for(int i=0; i<n; i++) {
        sum += a[i];
        if(sum < 0) {
            ans += -sum;
            sum = 0;
        }
    }
    if(ans > m) {
        cout<<-1<<"\n";
    } else {
        cout<<ans<<"\n";
    }
    return 0;
}
