// Probability 
//
// probability of A ocour
// p(A) = outcomes/ total_outcomes
//

#include <bits/stdc++.h>

using namespace std;

#define mod 1000000007

// 7 6 5 4 3 2 1 -> 5040 tot possibilities
// 6 5 4 3 2 1 1 -> 720  
// _ _ _ _ _ _ _

void solve(int n) {
    int x = 1;
    for (int i = 1; i < n; i++) {
        x = x * i;
    }

    cout << mod << "\n";
    cout << x%mod << "\n";
}

int main (int argc, char *argv[])
{
    int t;
    solve(7);
    return 0;
}
