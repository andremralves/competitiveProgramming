/**
 *    author: mralves 
 *    created: 19-11-2022 19:55:26       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
    int m, s;
    cin>>m>>s;
    vector<ll> a(1001, 0);
    int limit = 0;
    for (ll i = 0; i < m; i++) {
        int j;
        cin>>j;
        a[j] = 1;
        limit = max(limit, j);
    }

    ll sum = 0;
    bool ans = true;
    for (ll i = 1; i < 10001; i++) {
        if(a[i] != 1) {
            sum+= i;
            a[i] = 1;
        }
        if(sum > s) {
            ans = false;
            break;
        } if(sum == s) {
            break;
        }
    }
    for (int i = 1; i <= limit; i++) {
        if(a[i] == 0) {
            ans = false;
            break;
        }
    }
    cout<<(ans ? "YES" : "NO")<<"\n";
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
