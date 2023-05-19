/**
 *    author: mralves 
 *    created: 15-05-2023 02:38:21       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

void solve() {
    string s;
    cin>>s;
    int n = s.size();
    vector<int> a(100);
    for(int i=0; i<n; i++) {
        a[s[i]-'a']++;
    }

    int cnt = 0;
    for(int i=0; i<100; i++) {
        if(a[i] > 1) cnt++;
    }

    cout<<(cnt > 1 ? "YES" : "NO")<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}
