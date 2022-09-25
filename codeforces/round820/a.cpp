#include <bits/stdc++.h>

using namespace std;

void solve() {
    int a, b, c;
    cin>>a>>b>>c;
    int e1 = a-1; 
    int e2;
    if(c==1) 
        e2 = b-c;
    else
        e2 = abs(b-c)+c-1; 
    if(e1>e2) cout << 2 << endl;
    else if(e1<e2) cout << 1 << endl;
    else cout << 3 << endl;
}
int main (int argc, char *argv[])
{
    int t; 
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
