/**
 *    author: mralves 
 *    created: 04-02-2023 13:16:45       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

void solve() {

}

int main ()
{
    int n, d;
    cin>>n>>d;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a.begin(), a.end());
    int ans = 0;
    for(int i=0; i<n-2; i++) {
        if(abs(a[i] - a[i+2]) <= d) {
            ans++; 
        }
    }
    cout<<ans<<"\n";
    return 0;
}
