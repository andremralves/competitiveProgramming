/**
 *    author: mralves 
 *    created: 23-11-2022 03:28:28       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
    string s;
    int p;
    cin>>s>>p;
    map<char, ll> mp;
    map<ll, char> mp2;
    int val = 1;
    for (ll i = 0; i < s.size(); i++) {
        if(mp2.find(s[i]) == mp2.end()) {
            mp2.insert({val, s[i]});
            mp.insert({s[i], 1});
            val++;
        } else {
            mp[s[i]]++;
        }
    }
    ll sum = 0;
    for(auto i : mp2) {
        sum+=i.first * mp[i.second];
    }
    cout<<sum<<"\n";
    //for(auto it = mp.rbegin(); it!=mp.rend();it++) {
    //    if(sum <= p) break;
    //    sum -= it->first;
    //    it->second = '0';
    //}
    //for (ll i = 0; i < s.size(); i++) {
    //    if(mp.find(s[i]) == mp.end()) continue;
    //    cout<<s[i];
    //}
    cout<<"\n";
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
