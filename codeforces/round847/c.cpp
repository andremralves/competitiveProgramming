/**
 *    author: mralves 
 *    created: 01-02-2023 23:20:36       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

void solve() {
    int n;
    cin>>n;
    vector<vector<int>> a(n, vector<int>(n));
    vector<int> cnt(n+1);
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-1; j++) {
            cin>>a[i][j];
            if(j == 0) {
                cnt[a[i][j]]++;
            }
        }
    }

    vector<int> ans(n);
    for(int i=0; i<=n; i++) {
        if(cnt[i] == n-1){
            ans[0] = i;
        }
    }

    for(int i=0; i<n; i++) {
        if(a[i][0] != ans[0]) {
            for(int j=0; j<n-1; j++) {
                ans[j+1] = a[i][j];
            }
        }
    }

    for(int i=0; i<n; i++) {
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
}

int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();    
    }
    return 0;
}
