#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main (int argc, char *argv[])
{
    ll n;
    cin>>n;
    ll ans = 1;
    for (ll i = 0; i < n; i++) {
        ans *= 2; 
    }
    cout<<ans<<"\n";
    return 0;
}
