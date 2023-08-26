/**
 *    author: mralves 
 *    created: 24-08-2023 11:32:03       
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
    cin>>n;
    vector<int> b(n);
    for(int i=0; i<n; i++) {
        cin>>b[i];
    }

    vector<int> a;
    for(int i=0; i<n-1; i++) {
        a.push_back(b[i]);
        if(b[i] <= b[i+1]) {
            continue;
        } else {
            a.push_back(b[i+1]);
        }
    }
    a.push_back(b[n-1]);

    cout<<a.size()<<"\n";
    for(auto x:a) {
        cout<<x<<" ";
    }
    cout<<"\n";

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
