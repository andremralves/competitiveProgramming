/**
 *    author: mralves 
 *    created: 23-11-2022 03:28:28       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
    string s;
    cin>>s;
    int days = 1;
    set<char> st;
    for (int i = 0; i < s.size(); i++) {
        st.insert(s[i]);
        if(st.size() > 3) {
            //cout<<"si:"<<s[i]<<"\n";
            days++;
            st.clear();
            st.insert(s[i]);
        }
    }
    cout<<days<<"\n";
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
