#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin>>n;
    int arr[n+1];

    for (int i = 1; i <= n; i++) {
        cin>>arr[i];
    }
    vector<int> appear(n+1, 0);
    for (int i = 1; i <= n; i++) {
        appear[arr[i]]++;
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if(appear[i] >= 3) ans = i;
    }

    cout<<((ans == 0) ? -1 : ans)<<endl;
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
