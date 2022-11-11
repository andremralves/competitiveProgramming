#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
    ll s, a, f;
    cin>>s>>a>>f;
    vector<ll> st(f);
    vector<ll> av(f);
    for(ll i=0; i<f; i++) {
        cin>>st[i]>>av[i];
    }
    sort(st.begin(), st.end());
    sort(av.begin(), av.end());
    pair<ll, ll> ans;
    if(f%2 == 0)
        ans = {st[f/2-1], av[f/2-1]};
    else
        ans = {st[f/2], av[f/2]};
    cout<<"(Street: "<<ans.first<<", Avenue: "<<ans.second<<")"<<endl;
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
