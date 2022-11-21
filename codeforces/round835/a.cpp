/**
 *    author: mralves 
 *    created: 21-11-2022 11:35:35       
**/
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
    vector<ll>a(3);
    for (int i = 0; i < 3; i++) {
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    cout<<a[1]<<"\n";
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
