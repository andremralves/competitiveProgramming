#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

#define LIMIT 100000

bool checkPrime(int num) {
    if(num == 1) return false;
    for(int i=2; i*i<=num; i++) {
        if(num%i == 0) {
            return false;
        }
    }
    return true;
}

void solve() {
    int n;
    cin>>n;
    for(int i=2; i<=LIMIT; i++) {
        if(i == n) continue;
        bool prime = checkPrime(i);
        if(prime) {
            prime = checkPrime(n+i);
            if(!prime) {
                cout<<i<<endl; 
                break;
            }
        }
    }
    
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
