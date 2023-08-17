/**
 *    author: mralves 
 *    created: 17-08-2023 11:32:04       
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

    int n = s.size();
    int op = 2;
    for(int i=0; i<n-1; i++) {
        if(s[i] == s[i+1]) {
            op = 1;
        }
    }

    if(op == 1) {
        cout<<"YES\n";
        for(int i=0; i<2*n; i++) {
            cout<<(i%2==0?"(":")");
        }
        cout<<"\n";
    } else if(s == "()") {
        cout<<"NO\n";
    } else {
        cout<<"YES\n";
        for(int i=0; i<2*n/2; i++) {
            cout<<"(";
        }
        for(int i=2*n/2; i<2*n; i++) {
            cout<<")";
        }
        cout<<"\n";
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
