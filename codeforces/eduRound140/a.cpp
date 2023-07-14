/**
 *    author: mralves 
 *    created: 16-12-2022 11:27:14       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
    int a[3][3];
    cin>>a[0][0]>>a[0][1];
    cin>>a[1][0]>>a[1][1];
    cin>>a[2][0]>>a[2][1];

    set<int> b, c;
    for (int i = 0; i < 3; i++) {
        b.insert(a[i][0]);
        c.insert(a[i][1]);
    }

    if(b.size() <= 2 and c.size() <= 2) {
        cout<<"NO"<<"\n";
    } else {
        cout<<"YES\n";
    }

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
