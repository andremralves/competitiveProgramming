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
    int ans = n/3;
    int rest = n%3;
    vector<ll> a(3, ans);
    int i = 0;
    while(rest) {
        a[i]++;
        i++;
        rest--;
    }
    cout<<a[1]<<" "<<a[0]+1<<" "<<a[2]-1<<"\n";
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
