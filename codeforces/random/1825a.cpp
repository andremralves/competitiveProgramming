/**
 *    author: mralves 
 *    created: 11-06-2023 23:45:47       
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
    string s;
    cin>>s;
    string r = s;
    reverse(all(r));
    int cnt = 1;
    for(int i=1; i<(int)s.size(); i++) {
        if(s[i] == s[0]) cnt++;
    }
    if(cnt == (int)s.size()) {
        cout<<"-1\n";
        return;
    }
    if(s != r) {
        cout<<s.size()<<"\n";
    } else {
        cout<<s.size()-1<<"\n";
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
