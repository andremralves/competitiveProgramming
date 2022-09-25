#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    cout << max_element(a.begin(), a.end()) - a.begin() + 1 << '\n';
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
