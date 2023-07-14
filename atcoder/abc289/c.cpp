/**
 *    author: mralves 
 *    created: 11-02-2023 09:36:39       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;


int ans = 0;

bool check(set<int> st, int n) {
    for(int i=1; i<=n; i++) {
        if(st.find(i) == st.end()) {
            return false;
        }
    }
    return true;
}

void backtrack(vector<set<int>> sets, int mask, int n, int m) {

    if(mask >= 1 << m) {
        return;
    }

    set<int> st;
    for(int i=0; i<m; i++) {
        if(mask & (1 << i)) {
            for(auto x: sets[i]) {
                st.insert(x);
            }
        }
    }
    if(check(st, n)) {
        ans++;
    }
    backtrack(sets, mask+1, n, m);
}

int main ()
{
    int n, m;
    cin>>n>>m;
    vector<set<int>> sets(m);
    for(int i=0; i<m; i++) {
        int y;
        cin>>y;
        for(int j=0; j<y; j++) {
            int x;
            cin>>x;
            sets[i].insert(x);
        }
    }
    backtrack(sets, 1, n, m);
    cout<<ans<<"\n";
    return 0;
}
