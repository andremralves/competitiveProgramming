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
    int a[4];
    set<int> st;
    for(int i=0; i<4; i++) {
        cin>>a[i];
        st.insert(a[i]);
    }
    cout<<4-st.size()<<"\n";
}

int main ()
{
    solve();    
    return 0;
}
