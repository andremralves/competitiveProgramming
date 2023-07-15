#include <bits/stdc++.h>

using namespace std;

long long binpow(long long a, long long b, long long MOD) {
    a %= MOD;
    long long res = 1;
    while(b > 0) {
        if(b & 1)
            res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

int main() {
    int n;
    cin>>n;
    int ans = 0;
    for(int i=1; i<n; i++) {
        int p = n-1;
        if((binpow(i, p, n)-1)%n != 0) continue;
        p--;
        bool ok = true;
        while(p > 0) {
            if((binpow(i, p, n)-1)%n == 0) {
                ok = false;
                break;
            }
            p--; 
        }
        if(ok) {
            ans++;
        }
    }
    cout<<ans<<"\n";
    return 0;
}
