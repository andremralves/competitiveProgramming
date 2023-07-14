/**
 *    author: mralves 
 *    created: 19-02-2023 09:04:18       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

void solve() {

}

int main ()
{
    int n, k;
    cin>>n>>k;
    vector<int> a(n);
    set<int> pick;
    for(int i=0; i<n; i++) cin>>a[i];

    sort(a.begin(), a.end());

    for(int i=0; i<n; i++) {
        if(pick.size() == k)  break;
        pick.insert(a[i]);
    }

    int prev = -1;
    for(auto x: pick) {
        if(x-prev > 1) {
            break;
        }
        prev = x;
    }
    cout<<prev+1<<"\n";
    return 0;
}
