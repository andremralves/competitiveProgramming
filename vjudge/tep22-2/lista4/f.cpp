/**
 *    author: mralves 
 *    created: 06-12-2022 13:04:59       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin>>a[i]; 
    }
    sort(a.begin(), a.end());

    int next = 1;
    bool loop = true;
    int ans = 1;
    while(loop) {
        loop = false;
        int i =  next;
        int j = 1;
        for (i = 1; i <= n; i++) {
            if(a[i-1] == -1) continue;
            if(a[i-1] >= j) {
                a[i-1] = -1;
            } else {
                if(!loop) {
                    next = i;
                    loop = true;
                    ans++;
                }
            }
            j++;
        }
    }
    cout<<ans<<"\n";
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
