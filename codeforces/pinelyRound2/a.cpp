/**
 *    author: mralves 
 *    created: 30-08-2023 11:39:08       
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
    int n, a, q;
    cin>>n>>a>>q;
    string s;
    cin>>s;

    if(n == a) {
        cout<<"YES\n";
        return;
    }

    int on = a;
    for(int i=0; i<q; i++) {
        if(s[i] == '+') {
            on++;
        } else {
            on--;
        }
        if(on == n) {
            cout<<"YES\n";
            return;
        }
    }

    if(count(all(s), '+')+a >= n) {
        cout<<"MAYBE\n";
    } else {
        cout<<"NO\n";
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
