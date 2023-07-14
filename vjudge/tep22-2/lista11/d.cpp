#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
    int n;
    cin>>n;
    int pos = 1;
    for(int i=1;;i++) {
        if(n > (ll)pos+i) {
            pos+=i;
            continue;
        }
        for(int j=1; j<=i; j++) {
            if(pos == n) {
                cout<<j<<"\n";
                return;
            }
            pos++;
        }
    }
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}


