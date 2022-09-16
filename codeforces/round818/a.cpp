//https://codeforces.com/contest/1717/problem/A

#include <bits/stdc++.h>

using namespace std;

void solve(long int n) {
    std::cout << n+2*(n/2+n/3) << std::endl;
}

int main (int argc, char *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n; 
        cin >> n;
        solve(n);
    }
    return 0;
}
