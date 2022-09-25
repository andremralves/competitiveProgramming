#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    string s;
    cin>>n;
    cin>>s;
    bool visited[n+1];
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j+=i) {
            if(s[j-1] == '1') break;
            if(visited[j] == true) continue;
            visited[j] = true;
            ans+=i;
        }
    }
    cout<<ans<<endl;
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
