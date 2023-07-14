/**
 *    author: mralves 
 *    created: 16-12-2022 11:27:14       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
    int n;
    cin>>n;
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++) {
        cin>>a[i];
    }

    sort(a.begin()+2, a.end());

    for (int i = 1; i <= n; i++) {
        if(a[i] > a[1]) {
            a[1] += (a[i]+1-a[1])/2;
        }
    }

    cout<<a[1]<<"\n";

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
