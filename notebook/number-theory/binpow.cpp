#include <bits/stdc++.h>

using namespace std;

const long long MOD = 998244353;

long long binpow(long long a, long long b) {
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
    cout<<binpow(2,5);
    return 0;
}
