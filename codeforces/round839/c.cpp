/**
 *    author: mralves 
 *    created: 18-12-2022 11:34:00       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
    int k, n;
    cin>>k>>n;
    vector<int> ans(k);
    int gap = 1;
    iota(ans.begin(), ans.end(), 1);
    ans[k-1] = n;
    for (int i = k-2; i >= 0; i--) {
        if(i == 0 and ans[i+1]-gap <= 0) break;
        if(ans[i+1]-gap<=ans[i-1]) break;
        ans[i] = ans[i+1]-gap;
        gap++;
    }
    for (int i = 0; i < k; i++) {
        cout<<ans[i]<<(i == k-1 ? "\n":" ") ;
    }
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
