/**
 *    author: mralves 
 *    created: 30-11-2022 23:26:17       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++) cin>>a[i];
    for (int i = 0; i < n; i++) cin>>b[i];

    for (int i = 0; i < n; i++) {
        if(i == 0) {
            cout<<b[i]-a[i]<<(i==n-1?"\n":" ");
        } else {
            cout<<min(b[i]-a[i], b[i]-b[i-1])<<(i==n-1?"\n":" ");
        }
    }
}

int main (int argc, char *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();    
    }
    return 0;
}
