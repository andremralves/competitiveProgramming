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
    string s; 
    cin>>s;
    set<char> st;
    for(auto c: s) {
        st.insert(c);
    }
    if(st.size() % 2 == 0) {
        cout<<"CHAT WITH HER!\n";
    } else {
        cout<<"IGNORE HIM!\n";
    }
}

int main ()
{
    solve();    
    return 0;
}
