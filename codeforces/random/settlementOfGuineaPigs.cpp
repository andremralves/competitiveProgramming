#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
    ll n; 
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    int used = 0, unused = 0, pigs = 0;
    for(int i=0; i<n; i++) {
        if(a[i] == 1) {
            if(unused >= 1) {
                unused--, used++;
            } else {
                used++;
            }
            pigs++;
        } else {
            int tmp = used+unused;
            used = ceil((float)(pigs+1)/2);
            unused = tmp-used;
        }
    }
    cout<<used+unused<<"\n";
}

int main () {
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}
