/**
 *    author: mralves 
 *    created: 19-11-2022 19:55:26       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
    ll l,r,x, a, b;
    cin>>l>>r>>x>>a>>b;

    if(a == b) {
        cout<<"0\n";
    } else if(a-x < l and a+x > r) {
        cout<<"-1\n";
    } else if(a+x <= b or a-x >= b) {
        cout<<"1\n";
    } else if(abs(b-r) > x or abs(b-l) > x){
        cout<<"2\n";
    } else if(abs(a-r) ) {
        cout<<"3\n";
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
