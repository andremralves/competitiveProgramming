/**
 *    author: mralves 
 *    created: 21-11-2022 11:35:35       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
    int n;
    string s;
    cin>>n>>s;
    int max = 0;
    for (ll i = 0; i < s.length(); i++) {
        if(s[i] > max) {
            max = s[i];
        }
    }
    cout<<max-'a'+1<<"\n";
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
