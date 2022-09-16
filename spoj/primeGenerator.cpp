#include <bits/stdc++.h>
#include <cmath>

using namespace std;

void solve(int n1, int n2) {
    for (int i = n1; i <= n2; i++) {
        bool isPrime = true;
        if(i == 1) isPrime = false;
        for (int j = 2; j <= sqrt(i); j++) {
            if(i%j == 0){
                isPrime = false;
                break; 
            } 
        }
        if(isPrime) {
            cout << i << "\n";
        }
    }  
}

int main (int argc, char *argv[])
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n1, n2;
        cin >> n1 >> n2;
        solve(n1, n2);
        if(i != t-1) cout << "\n";
    }
    return 0;
}
