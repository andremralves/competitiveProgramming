#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

bool solve() {
    ll n, m, k;
    cin>>n>>m>>k;    
    vector<ll> a(k+1);
    for(ll i=1;i<=k;i++) {
        cin>>a[i];
    }
    ll next = k;
    ll space = 2;
    set<ll> s;
    for(ll i=1; i<=k;i++) {
        s.insert(a[i]);
        if(s.find(k) != s.end()) {
            k--; 
            space--;
            if(space < 2) space = 2;
        }
        else {
            space++;
        }
        if(space >= n*m-1) return false;
    }
    return true;
}

int main (int argc, char *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        cout<<(solve() ? "YA" : "TIDAK")<<endl;    
    }
    return 0;
}
