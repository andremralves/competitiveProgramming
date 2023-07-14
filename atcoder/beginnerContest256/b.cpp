#include <bits/stdc++.h>
#include <vector>

using namespace std;
using ll = int64_t;

int main (int argc, char *argv[])
{
    ll n;
    cin>>n;
    ll ans = 0;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin>>a[i];
    }
    ans = 0;
    for (ll i = 0; i < n; i++) {
        ll sum = 0;
        for (ll j = i; j < n; j++) {
            sum += a[j];
            if(sum > 3) {
                ans++;
                break;
            }
        }
    }
    cout<<ans<<"\n";
    return 0;
}
