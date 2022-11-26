/**
 *    author: mralves 
 *    created: 25-11-2022 22:11:10       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
    ll n;
    cin>>n;
    if(n%2 == 0) {
        for (int i = 0; i < n; i++) {
            if(i!=n-2)
                cout<<"2 ";
            else {
                cout<<"3 1"<<"\n";
                break;
            }
        }
    } else {
        for (int i = 0; i < n; i++) {
            if(i!=n-1)
                cout<<"1 ";
            else
                cout<<1<<"\n";
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
