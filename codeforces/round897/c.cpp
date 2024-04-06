/**
 *    author: mralves 
 *    created: 11-09-2023 11:33:10       
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

// (l, r)
//int first_false(int l, int r) {
//    l--, r++;
//    while(l < r) {
//        int m = l+(r-l)/2;
//        if(ok) {
//            l = m;
//        } else {
//            r = m;
//        }
//    }
//}

void solve() {
    int n;
    cin>>n;
    set<int> st;
    for(int i=0; i<n; i++) {
        int x; cin>>x;
        st.insert(x);
    }

    int mex = -1;
    int cur = 0;
    for(auto x: st) {
        if(x != cur) {
            mex = cur;
            break;
        }
        cur++;
    }
    if(mex == -1) mex = cur;
    while(true) {
        cout<<mex<<"\n";
        cout.flush();
        int resp; cin>>resp;
        if(resp == -1 or resp == -2) {
            break;
        } else {
            mex=resp;
        }
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
