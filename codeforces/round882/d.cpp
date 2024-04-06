/**
 *    author: mralves 
 *    created: 12-08-2023 01:34:40       
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
    int n, m, q;
    set<int> st;
    cin>>n>>m>>q;

    string s;
    cin>>s;

    for(int i=0; i<n; i++) st.insert(i);

    vector<int> val(n, -1);
    int cnt = 0;
    for(int i=0; i<n; i++) {
        int l, r;
        cin>>l>>r;
        l--, r--;
        for(int i=l; i<=r; i++) {
            if(val[i] == -1)
                val[i] = cnt++;
        }
    }

    for(int i=0; i<n; i++) {
    }
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
