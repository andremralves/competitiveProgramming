/**
 *    author: mralves 
 *    created: 03-07-2023 15:05:56       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;
using ii = pair<int, int>;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
vector<ii> dir4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
vector<ii> dir8 = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};

void solve() {
    string s; 
    int k, q;
    cin>>s>>k>>q;
    set<string> st;
    for(int i=0; i<(int)s.size()-k+1; i++) {
        st.insert(s.substr(i, k));
    }
    while(q--) {
        string t;
        cin>>t;
        bool ok = false;
        for(int i=0; i<(int)t.size()-k+1; i++) {
            if(st.count(t.substr(i, k))) {
                ok = true;
                break;
            }
        }
        cout<<(ok ? 1 : 0)<<"\n";
    }
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
