/**
 *    author: mralves 
 *    created: 01-04-2023 09:00:55       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

void solve() {
    int n, x;
    cin>>n>>x;
    vector<int> a(n);
    map<int, int> mp;
    for(int i=0; i<n; i++) {
        cin>>a[i] ;
        mp[a[i]+x] = a[i];
    }

    for(int i: a) {
        if(mp.find(i) != mp.end()) {
            cout<<"Yes\n";
            return;
        }
    }
    cout<<"No\n";
}

int main ()
{
    solve();    
    return 0;
}
