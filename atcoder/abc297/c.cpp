/**
 *    author: mralves 
 *    created: 09-04-2023 09:01:48       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

void solve() {
    int n, m;
    cin>>n>>m;
    vector<string> ss(n);
    for(int i=0; i<n; i++) {
        cin>>ss[i];
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(j < m-1 and ss[i][j] == 'T' and ss[i][j+1] == 'T') {
                cout<<"PC";
                j++;
            } else {
                cout<<ss[i][j];
            }
        }
        cout<<"\n";
    }
}

int main ()
{
    solve();    
    return 0;
}
