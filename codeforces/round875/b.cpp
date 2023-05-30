/**
 *    author: mralves 
 *    created: 28-05-2023 22:41:44       
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
    cin>>n;
    vector<int> a(n), b(n);
    map<int, int> mp1, mp2;
    set<int> st;
    for(int i=0; i<n; i++) {
        cin>>a[i];
        st.insert(a[i]);
    }
    for(int i=0; i<n; i++) {
        cin>>b[i];
        st.insert(b[i]);
    }

    for(int i=0; i<n; i++) {
        int j = i;
        while(j<n and a[j] == a[i]) {
            j++;
        }
        mp1[a[i]] = max(j-i, mp1[a[i]]);
        i = j-1;
    }

    for(int i=0; i<n; i++) {
        int j = i;
        while(j<n and b[j] == b[i]) {
            j++;
        }
        mp2[b[i]] = max(j-i, mp2[b[i]]);
        i = j-1;
    }

    auto it1 = mp1.begin();
    auto it2 = mp2.begin();

    int ans = 0;
    for(auto x : st) {
        ans = max(mp1[x] + mp2[x], ans);
    }
    cout<<ans<<"\n";
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
