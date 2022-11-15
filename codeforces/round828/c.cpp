#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve() {
    ll n;
    char c;
    string s;
    cin>>n>>c>>s;
    if(c == 'g') {
        cout<<0<<"\n";
        return;
    }
    ll ans = 0, cnt = 0;
    bool last = 0;
    for(ll i=0; i<n; i++) {
        if(last) break;
        if(s[i] == c) {
            for(;i<n; i++) {
                if(s[i] == 'g') break;
                cnt++;
                if(i == n-1) {
                    last = 1;
                    i = -1;
                }
            }
            ans = max(ans, cnt);
            cnt = 0;
        }
    }
    cout<<ans<<"\n";
}

// Baelz solution
void solve2()
{
    ll n;
    char c;
    string s;
    cin>>n>>c;
    cin>>s;
    s+=s;
    ll res=0,pos=0;
    for(ll i=s.size()-1; i>=0; i--){
        if (s[i]=='g') pos=i;
        if (s[i]==c && pos!=-1) res=max(res,pos-i);
    }
    cout<<res<<"\n";
}

int main (int argc, char *argv[])
{
    int t; 
    cin >> t;
    while (t--)
    {
        solve2();
    }
    return 0;
}
