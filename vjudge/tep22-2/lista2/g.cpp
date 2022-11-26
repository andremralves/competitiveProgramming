#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;
using pll = pair<ll, ll>;

void solve() {
    int n, m;
    cin>>n>>m;
    queue<pair<ll, ll>> q;
    for (ll i = 0; i < n; i++) {
        ll x;
        cin>>x;
        q.push({x, i});
    }
    ll ans = 0;
    while(!q.empty()) {
        pll x = q.front();
        queue<pll> q1 = q;
        ll maxP = 0;
        while (!q1.empty())
        {
            maxP = max(q1.front().first, maxP);
            q1.pop();
        }
        //cout<<maxP<<"\n";
        pll cur;
        while (!q.empty())
        {
            //cout<<"ok"<<"\n";
            cur = q.front();
            if(q.front().first == maxP) {
                ans++;
                q.pop();
                break;
            } else {
                q.pop(); 
                q.push(cur);
            }
        } 
        if(cur.second == m) break;
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
