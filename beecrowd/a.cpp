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
    for(int i=0; i<(int)s.size(); i++) {
        int cnt = 1;
        int j = i;
        if(count(all(s), 'O') >= 2) {
            cout<<"?\n";
            return;
        }
        if(count(all(s), 'X') >= 3) {
            cout<<"?\n";
            return;
        }
        while(j < (int)s.size() and s[j] == 'X') {
            j++;
        }
        if(j-i == 2) {
            cout<<"Alice\n";
            return;
        }
    }
    cout<<"*\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
