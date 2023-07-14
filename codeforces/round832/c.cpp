#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void solve() {
    int n;
    cin>>n;
    vector<ll> a(n+1);
    ll mini = INT_MAX;
    for(ll i=1 ; i<=n; i++) {cin>>a[i]; mini = min(mini, a[i]);}
    cout<<(a[1] > mini ? "Alice" : "Bob")<<"\n";
}

int main ()
{
    int t;
    cin>>t; 
    while (t--)
    {
        solve();
    }
    return 0;
}
