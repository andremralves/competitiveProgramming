/**
 *    author: mralves 
 *    created: 11-12-2022 12:58:05       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
    int t, p;
    set<int> s[101];
    cin>>p>>t; 
    cin.ignore();
    string line;
    while(getline(cin, line)) {
        if(line == "") break;
        int i, j;
        stringstream sin;
        sin << line;
        sin>>i>>j;
        s[i].insert(j);
    }

    set<set<int>> ss;
    for (int i = 1; i <= p; i++) {
        ss.insert(s[i]);
    }
    cout<<ss.size()<<"\n";
}

int main ()
{
    int t;
    cin>>t;
    while(t--) {
        solve();
        if(t) cout<<"\n";
    }
    return 0;
}
