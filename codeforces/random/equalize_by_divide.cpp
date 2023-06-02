/**
 *    author: mralves 
 *    created: 02-06-2023 10:56:57       
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
    vector<int> a(n), r;
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    if(*min_element(all(a)) == *max_element(all(a))) {
        cout<<0<<"\n";
        return;
    }
    if(*min_element(all(a)) == 1) {
        cout<<"-1\n";
        return;
    }

    vector<ii> ans;
    while(*min_element(all(a)) != *max_element(all(a))) {
        for(int i =0; i<n; i++) {
            if(a[i] == 2) continue;
            for(int j=0; j<n; j++) {
                if(a[j] < a[i]) {
                    a[i] = ceil(a[i], a[j]);
                    ans.emplace_back(i+1, j+1);
                    break;
                }
            }
        }
    }
    cout<<ans.size()<<"\n";
    for(auto &[i, j] : ans) {
        cout<<i<<" "<<j<<"\n";
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
