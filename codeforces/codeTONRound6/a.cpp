/**
 *    author: mralves 
 *    created: 18-09-2023 11:36:46       
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
    int n, k, x;
    cin>>n>>k>>x;

    if(k > x+1 or k > n) {
        cout<<"-1\n";
        return;
    }
    vector<int> a;
    for(int i=0; i<k; i++) {
        if((int)a.size() >= n) break;
        a.push_back(i);
    }
    while((int)a.size() < n) {
        if(x == k)
            a.push_back(x-1);
        else
            a.push_back(x);
    }

    cout<<accumulate(all(a), 0)<<"\n";
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
