/**
 *    author: mralves 
 *    created: 31-08-2023 11:34:57       
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
    string s1, s2;
    cin>>s1>>s2;

    int n = s1.size();

    if(s1 == s2) {
        cout<<"YES\n";
        return;
    }

    bool ok = false;
    for(int i=0; i<n-1; i++) {
        if(s1[i] == '0' and s2[i] == '0') {
            if(s1[i+1] == '1' and s2[i+1] == '1') {
                ok = true;
            }
        } 
    }

    cout<<(ok ? "YES\n" : "NO\n");
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
