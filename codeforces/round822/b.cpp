#include <bits/stdc++.h>

using namespace std;

void solve() {
    int floors;
    cin>>floors;
    for (size_t i = 1; i <= floors; i++) {
        for (size_t j = 0; j < i; j++) {
            if(j==i-1) cout<<"1\n";
            else if(j==0) cout<<"1 ";
            else cout<<"0 ";
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
