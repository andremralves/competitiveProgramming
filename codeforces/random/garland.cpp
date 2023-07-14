#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
    string s; 
    cin>>s;
    vector<int> cnt(10);
    for(auto c: s) {
        cnt[c-'0']++;
    }
    int mx = *max_element(cnt.begin(), cnt.end());
    if(mx == 4) cout<<-1<<"\n";
    else if(mx == 3) cout<<6<<"\n";
    else cout<<4<<"\n";
}

int main () {
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}
