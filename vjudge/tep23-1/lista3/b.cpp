/**
 *    author: mralves 
 *    created: 02-05-2023 00:53:22       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

void solve() {
    int round = 0;
    while(cin>>round) {
        if(round == -1) break;
        cout<<"Round "<<round<<"\n";
        string s1, s2;
        cin>>s1>>s2;
        set<char> st, stok, sterr;
        for(int i=0; i<(int)s1.size(); i++) {
            st.insert(s1[i]);
        }
        for(int i=0; i<(int)s2.size(); i++) {
            if(st.find(s2[i]) == st.end()) {
                sterr.insert(s2[i]);
            } else {
                stok.insert(s2[i]);
            }
            if((int)sterr.size() >= 7) {
                cout<<"You lose.\n";
                break;
            }
            if(stok.size() == st.size()) {
                cout<<"You win.\n";
                break;
            }
        }
        if((int)sterr.size() < 7 and stok.size() < st.size())
            cout<<"You chickened out.\n";
    }
}

int main ()
{
    //std::ios::sync_with_stdio(false);
    //std::cin.tie(nullptr);

    int t = 1;
    //cin>>t;
    while (t--) solve();
    return 0;
}
