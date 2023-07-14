/**
 *    author: mralves 
 *    created: 27-05-2023 08:55:48       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;
using ii = pair<int, int>;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
vector<ii> dir4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
vector<ii> dir8 = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};

void solve() {
    int n;
    string s, t;
    cin>>n>>s>>t; 
    for(int i=0; i<n; i++) {
        if(s[i] == 'o') s[i] = '0';
        if(s[i] == 'l') s[i] = '1';
        if(t[i] == 'o') t[i] = '0';
        if(t[i] == 'l') t[i] = '1';
        if(s[i] != t[i]) {
            cout<<"No\n";
            return;
        }
    }
    cout<<"Yes\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    //cin>>t;
    while (t--) solve();
    return 0;
}
