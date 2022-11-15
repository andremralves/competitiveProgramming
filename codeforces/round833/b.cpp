#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
    ll n;
    string s;
    cin>>n;
    cin>>s;
    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        int cnt = 0;
        int maxFreq = 0;
        int unique = 0;
        vector<int> a(10);
        for (ll j = i; j < n && cnt<100; j++) {
            a[s[j]-'0']++;
            if(a[s[j]-'0'] == 1) unique++;
            maxFreq = max(a[s[j]-'0'], maxFreq);
            if(unique>=maxFreq) ans++;
            cnt++;
        }
    }
    cout<<ans<<"\n";
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
