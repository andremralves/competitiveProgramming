/**
 *    author: mralves 
 *    created: 30-11-2022 23:26:17       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
    int n, dif = -1;
    cin>>n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    bool ans = 1;
    for (int i = 0; i < n; i++) {
        cin>>b[i];
        if(b[i] != 0) {
            dif = a[i]-b[i];
        }
        if(a[i] < b[i]) ans = 0;
    }

    if(!ans) {
        cout<<"NO"<<"\n";
        return;

    }

    if(dif == -1) {
        cout<<"YES"<<"\n";
        return;
    }

    for (int i = 0; i < n; i++) {
        if(a[i] - b[i] > dif) {
            cout<<"NO"<<"\n";
            return;
        } else if(a[i] - b[i] < dif and b[i] != 0) {
            cout<<"NO"<<"\n";
            return;
        }
    }
    cout<<"YES"<<"\n";

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
