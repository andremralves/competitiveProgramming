/**
 *    author: mralves 
 *    created: 18-12-2022 11:34:00       
**/
#include <bits/stdc++.h>
#include <fstream>

using namespace std;
using ll = int64_t;

void solve() {
    int a[8];
    for (int i = 0; i < 4; i++) {
        cin>>a[i];
    }
    swap(a[2], a[3]);
    for (int i = 4; i < 8; i++) {
        a[i] = a[i-4];
    }

    for (int i = 3; i < 8; i++) {
        if(a[i-3]<a[i-2] and a[i-3]<a[i] and a[i-2]<a[i-1] and a[i]<a[i-1]) {
            cout<<"YES\n";
            return;
        };
    }
    cout<<"NO\n";
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
