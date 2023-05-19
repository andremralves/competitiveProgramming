#include <bits/stdc++.h>

using namespace std;

using ll = long long;

map<ll, ll> primeFact(ll N) {
    map<ll, ll> fact;
    for(ll i=2; i*i<=N; i++) {
        while(N % i == 0) {
            N /= i;
            fact[i]++;
        }
    }
    if(N > 1)
        fact[N]++;
    return fact;
}

int main() {

    map<ll, ll> factorials = primeFact(100);
    for(auto f : factorials) {
        cout<<f.first<<" "<<f.second<<"\n";
    }
    return 0;
}

