/**
 *    author: mralves 
 *    created: 18-12-2022 11:34:00       
**/
#include <bits/stdc++.h>
#include <string>

using namespace std;
using ll = int64_t;

void solve() {
    string line;
    getline(cin, line);
    cout<<line[0]-'0'+line[2]-'0'<<"\n";
}

int main ()
{
    int t;
    cin>>t;
    cin.ignore();
    while (t--)
    {
        solve();    
    }
    return 0;
}
