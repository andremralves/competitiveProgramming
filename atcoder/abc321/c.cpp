/**
 *    author: mralves 
 *    created: 23-09-2023 09:08:14       
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
    int k;
    cin>>k;
    vector<ll> que;
    for(int i=1; i<10; i++) {
        que.push_back(i);
    }

    for(int i=0; i<(int)que.size(); i++) {
        for(int j=0; j<=9; j++) {
            if(j<que[i]%10) {
                que.push_back(que[i]*10+j);
            }
        }
    }
    sort(all(que));
    unique(all(que));
    cout<<que[k-1]<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
