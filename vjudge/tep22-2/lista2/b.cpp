#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {

}

int main (int argc, char *argv[])
{
    int n,m;
    cin>>n>>m;
    vector<vector<char>> ans(n+2, vector<char>(m+2));
    for(ll i=0; i<=n+1; i++) {
        for(ll j=0; j<=m+1; j++) {
            if(i==0 or i==n+1 or j==0 or j==m+1) {
                ans[i][j] = '#';
            } else {
                cin>>ans[i][j];
            }
        }
    }
    for(ll i=0; i<=n+1; i++) {
        for(ll j=0; j<=m+1; j++) {
            if(j == m+1)
                cout<<ans[i][j]<<endl;
            else 
                cout<<ans[i][j];
        }
    }
    return 0;
}
