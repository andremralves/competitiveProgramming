/**
 *    author: mralves 
 *    created: 25-11-2022 22:11:10       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
    string s;
    cin>>s;
    string rs = s;
    reverse(s.begin(), s.end());
    cout<<(s+=rs)<<"\n";
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
