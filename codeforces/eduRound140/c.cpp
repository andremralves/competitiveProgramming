/**
 *    author: mralves 
 *    created: 16-12-2022 11:27:14       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int mod = 998244353;
int n;
bitset<100> bset = 0;
vector<vector<int>> rl;
ll ans = 0;

void recursion() {
    unsigned long long x = bset.to_ullong();
    if(x == n) return;
    string str = bset.to_string();
    int ii = 0;
    for (int i = 2; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            bool ok = true;
            if(rl[ii][j] == 1) {
                for (int k = ii+1; k <= j; ii++) {
                    if(str[k] != str[k-1]) {
                        ok = false;
                        break;
                    }
                }
            } else if(rl[ii][j] == 2) {
                ok = false;
                for (int k = ii+1; k <= j; k++) {
                    if(str[k] != str[k-1]) {
                        ok = true;
                        break;
                    }
                }
            }
            if(ok) ans = (ans + 1)%mod;
            for (int k = ii; k <= j; k++) {
                cout<<str[k];
            }
            cout<<"\n";
        }
        ii++;
    }
    cout<<x<<"\n";
    bset = ++x;
    recursion();
}

void solve() {
    cin>>n; 
    int ii = 0;
    rl.resize(n, vector<int>(n));
    for (int i = n-1; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            int x;
            cin>>rl[ii][j];
            //cout<<x<<"\n";
            cout<<"ok"<<"\n";
        }
        ii++;
    }
    recursion();
    cout<<ans<<"\n";
}

int main ()
{
    solve();    
    return 0;
}
