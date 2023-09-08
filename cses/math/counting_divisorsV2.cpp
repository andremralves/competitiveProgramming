#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e6;
int max_prime[MAX+1];

int main() {
    int n;
    cin>>n;

    for(int i=2; i<=MAX; i++) {
        if(max_prime[i] == 0) {
            for(int j=i; j<=MAX; j+=i) {
                max_prime[j] = i;
            }
        }
    }

    while(n--) {
        int x;
        cin>>x;
        int ans = 1;
        while(x > 1) {
            int div = max_prime[x];
            int cnt = 1;
            while(x % div == 0) {
                x /= div;
                cnt++;
            }
            ans *= cnt;
        }
        cout<<ans<<"\n";
    }

    return 0;
}
