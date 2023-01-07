/**
 *    author: mralves 
 *    created: 07-01-2023 08:59:51       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
    int n;
    cin>>n;
    int cnt = 0;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        if(x%2)
            cnt++;
    }
    cout<<cnt<<"\n";
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
