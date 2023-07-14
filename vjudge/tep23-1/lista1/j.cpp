/**
 *    author: mralves 
 *    created: 09-04-2023 11:14:34       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

void solve() {
    int n, m;
    while(cin>>n>>m) {
        if(n == 0 and m == 0) break;
        set<int> st;

        int ans = 0;
        for(int i=0; i<n; i++) {
            int x;
            cin>>x;
            st.insert(x);
        }
        for(int i=0; i<m; i++) {
            int x;
            cin>>x;
            if(st.find(x) != st.end()) ans++;
        }
        cout<<ans<<"\n";
    }
}

int main ()
{
    solve();    
    return 0;
}
