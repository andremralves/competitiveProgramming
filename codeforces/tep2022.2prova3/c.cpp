/**
 *    author: mralves 
 *    created: 10-02-2023 16:10:56       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

int n, ans = 0;
vector<int> a;

void dfs(int l, int r, int cnt, int sum) {
    if(cnt > n/2) return;
    if(cnt == n/2) {
        ans = max(ans, sum);
        return;
    }
    cout<<cnt<<"\n";
    dfs(l+1, r, cnt+1, sum+a[l]);
    dfs(l, r-1, cnt+1, sum+a[r]);
}

int main ()
{
    //cin>>n;
    //a.assign(n, 0);
    //for(int i=0; i<n; i++) cin>>a[i];
    //int l = 1, r = n-1;
    //dfs(l+1, r, 1, a[l]);
    //dfs(l, r-1, 1, a[r]);
    cout<<string(5, 'R')<<"\n";
    //cout<<ans<<"\n";
    return 0;
}
