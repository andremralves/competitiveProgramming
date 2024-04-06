/**
 *    author: mralves 
 *    created: 30-09-2023 08:59:40       
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
    int n, m;
    cin>>n>>m;
    string s, t;
    cin>>s>>t;

    if(s == t.substr(0, n) and s == t.substr(m-n, n)) {
        cout<<"0\n";
    } else if(s == t.substr(0, n)) {
        cout<<"1\n";
    } else if(s == t.substr(m-n, n)) {
        cout<<"2\n";
    } else {
        cout<<"3\n";
    }
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
