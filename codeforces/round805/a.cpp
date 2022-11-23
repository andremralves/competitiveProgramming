/**
 *    author: mralves 
 *    created: 23-11-2022 03:28:28       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
    int m, n;
    cin>>m;
    n = m;
    int pot = 1;
    m /= 10;
    while (m > 0) {
        pot = pot * 10;
        m /= 10;
    }
    cout<<n-pot<<"\n";
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
