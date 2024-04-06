/**
 *    author: mralves 
 *    created: 12-08-2023 11:35:10       
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

    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    sort(all(a));

    if(*max_element(all(a)) == *min_element(all(a))) {
        cout<<"-1\n";
    } else {
        vector<int> b, c;
        int i = 0;
        while(a[i] == a[0]) {
            b.push_back(a[i]);
            i++;
        }
        while(i < n) {
            c.push_back(a[i]);
            i++;
        }
        cout<<b.size()<<" "<<c.size()<<"\n";
        for(auto x: b) {
            cout<<x<<" ";
        }
        cout<<"\n";
        for(auto x: c) {
            cout<<x<<" ";
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
