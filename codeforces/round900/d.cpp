/**
 *    author: mralves 
 *    created: 26-09-2023 11:33:14       
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
    int n, len;
    cin>>n>>len;
    cin>>s;
    vector<int> a(len), b(len);
    for(int i=0; i<len; i++) {
        cin>>a[i];
    }
    for(int i=0; i<len; i++) {
        cin>>b[i];
    }
    int q;
    cin>>q;
    while(q--) {
        int x;
        cin>>x;
        int lo = lower_bound(all(a), x) - a.begin();
        int up = lower_bound(all(b), x) - b.begin();
        int i = min(lo, up);
        int l = min(x, a[i]+b[i]-x);
        int r = max(x, a[i]+b[i]-x);
        l--, r--;
        cout<<l<<" "<<r<<"\n";
        reverse(s.begin()+l, s.begin()+r+1);
        cout<<s<<"\n";
    }
    cout<<s<<"\n";
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
