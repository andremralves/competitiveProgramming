/**
 *    author: mralves 
 *    created: 25-11-2022 16:17:17       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main (int argc, char *argv[])
{
    int n;
    cin>>n;
    set<ll> st;
    for (int i = 0; i < n; i++) {
        ll x;
        cin>>x;
        st.insert(x);
    }
    cout<<st.size()<<"\n";
    return 0;
}
