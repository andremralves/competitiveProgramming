#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans = 0;
    for(int i=0; i<s.size()-1; i++) {
        ans++;
        if(s[i+2] == s[i]) ans--;
    }
    cout<<ans<<"\n";
}

int main () {
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}
