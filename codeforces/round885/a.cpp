#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m, k;
    cin>>n>>m>>k;
    int a, b;
    cin>>a>>b;
    bool ok = true;
    for (int i=0; i<k; i++) {
        int x, y;
        cin>>x>>y;
        if(((bool)(a%2) == (bool)(x%2))) {
            if((bool)(b%2) == (bool)(y%2))
                ok = false;
        } else {
            if((bool)(b%2) != (bool)(y%2))
                ok = false;
        }
    }
    cout<<(ok?"YES":"NO")<<"\n";
}
//1
//3 5 3
//1 5
//3 4
//3 2
//1 4

// 0 0 0 4 1
// 0 0 0 0 0
// 0 3 0 2 0

// 0 0 0 4 0
// 0 0 3 1 0
// 0 0 0 2 0

int main() {
    int t; cin>>t;
    while(t--)
        solve();
    return 0;
}
