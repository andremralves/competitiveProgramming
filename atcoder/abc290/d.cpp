/**
 *    author: mralves 
 *    created: 19-02-2023 09:04:18       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

void solve() {
    int n, d, k;
    cin>>n>>d>>k;
    vector<int> mark(n, 0);
    set<int> unused;
    for(int i=0; i<n; i++) unused.insert(i);
    int x = 0;
    mark[x] = 1;
    unused.erase(x);
    for(int i=0; i<n; i++) {
        if(i+1 == k) {
            cout<<x<<"\n";
            break;
        }
        x = (x+d)%n;
        if(mark[x] == 1) {
            x = *unused.upper_bound(x);
            mark[x] = 1;
            unused.erase(x);
        }
    }
}

int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();    
    }

    set<int> test;
    test.insert(1);
    test.insert(2);
    test.insert(3);
    test.insert(4);
    cout<<"test:"<<*test.upper_bound(5)<<"\n";
    return 0;
}
