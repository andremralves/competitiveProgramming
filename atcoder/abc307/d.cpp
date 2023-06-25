/**
 *    author: mralves 
 *    created: 24-06-2023 09:06:53       
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
    int n;
    string s;
    cin>>n>>s;
    stack<char> st;
    int pcnt = 0;
    for(int i=0; i<n; i++) {
        st.push(s[i]);
        if(st.top() == '(') {
            pcnt++;
        }
        if(st.top() == ')') {
            while(!st.empty() and st.top() != '(' and pcnt > 0) {
                st.pop();
            }
            if(!st.empty() and pcnt>0) {
                pcnt--;
                st.pop();
            }
        }
    }
    string ans;
    while(!st.empty()) {
        ans += st.top();
        st.pop();
    }
    reverse(all(ans));
    cout<<ans<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
