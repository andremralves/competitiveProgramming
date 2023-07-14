/**
 *    author: mralves 
 *    created: 16-12-2022 11:27:14       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int n;
string s;


void solve() {
    cin>>n;
    cin>>s;
    vector<int> a(1<<n);
    iota(a.begin(), a.end(), 1);
    
    while (next_permutation(a.begin(), a.end()))
    {
        set<int> st;
        for (int i = 0; i < a.size(); i++) {
            st.insert(a[i]);
        } 
        for (int i = 0; i < s.size(); i++) {
            if(s[i] == 0) {
                for(auto it = st.begin(); it != st.end(); it = it+2) {
                    
                }
            }
        }
    }

}

int main ()
{
    solve();    
    return 0;
}
