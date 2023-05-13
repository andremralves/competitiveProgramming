/**
 *    author: mralves 
 *    created: 07-05-2023 00:22:07       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

void solve() {
    int n; 
    cin>>n;
    map<int, string> mp1;
    map<int, string> mp2;
    map<int, string> mp3;
    for(int i=0; i<n; i++) {
        int x;
        string s;
        cin>>x>>s;
        if(s == "01") {
            mp1.insert({x, s});
        } else if(s =="10") {
            mp2.insert({x, s});
        } else if(s == "11") {
            mp3.insert({x, s});
        }
    }
    int val1 = INT_MAX, val2 = INT_MAX;
    if(!mp1.empty() and !mp2.empty()) {
        val1 = mp1.begin()->first + mp2.begin()->first;
    }
    if(!mp3.empty()) {
        val2 = mp3.begin()->first;
    }
    if(val1 == INT_MAX and val2 == INT_MAX) {
        cout<<"-1\n";
    } else {
        cout<<min(val1, val2)<<"\n";
    }
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
