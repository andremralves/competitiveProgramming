/**
 *    author: mralves 
 *    created: 31-08-2023 11:34:57       
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
    cin>>s;
    int n = s.size();

    int len = 0, prev = 0;
    bool ok = true;
    bool ord;
    int mx = 0, mi = 0;
    for(int i=0; i<n; i++) {
        if(s[i] == '+') {
            len++;
            st.insert(len);
            a.push_back(len);
        } else if(s[i] == '-') {
            len--;
            st.insert(len);
        } else if(s[i] == '0') {
            if(len < 2) {
                ok = false;
                break;
            }
            if(ord) {
                *st.begin()
            }
            prev = len;
            ord = false;
        } else {
            prev = len;
            ord = true;
        }
    }
    
    cout<<(ok?"YES":"NO")<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}
