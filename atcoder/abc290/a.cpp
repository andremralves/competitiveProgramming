/**
 *    author: mralves 
 *    created: 19-02-2023 09:04:18       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

void solve() {

}

int main ()
{
    int n, m;
    cin>>n>>m;
    vector<int> a(n);
    int ans = 0;
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<m; i++) {
        int x;
        cin>>x;
        ans += a[x-1];
    }

    cout<<ans<<"\n";
    return 0;
}
