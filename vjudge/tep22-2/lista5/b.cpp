/**
 *    author: mralves 
 *    created: 11-12-2022 12:58:05       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {

}

int main ()
{
    int n;
    cin>>n;
    vector<ll> a(n+1);
    for(int i=1; i<=n;i++) cin>>a[i];
    int i = 1;
    int ans = 1;
    set<int> used;
    used.insert(1);
    i = a[i];
    while(i != 2) {
        if(used.find(i) != used.end()) {
            cout<<-1<<"\n";
            return 0;
        }
        used.insert(i);
        i = a[i];
        ans++; 
    }
    cout<<ans<<"\n";
    return 0;
}
