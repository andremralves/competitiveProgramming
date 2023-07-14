/**
 *    author: mralves 
 *    created: 30-12-2022 11:34:02       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
    int n, k;
    cin>>n>>k;
    int i = 1, j = n;
    while(i <= j) {
        if(i == j)
            cout<<i<<" ";
        else
            cout<<j<<" "<<i<<" ";
        j--; i++;
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

