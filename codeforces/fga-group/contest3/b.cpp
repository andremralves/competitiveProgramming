/**
 *    author: mralves 
 *    created: 31-07-2023 16:24:56       
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
    int n, x1, y1, x2, y2;
    cin>>n>>x1>>y1>>x2>>y2;
    
    int v1, v2;
    if(max(x1, y1)-n/2 > n/2-min(x1, y1)+1) {
    //if(max(x1, y1)-n/2 <= min(x1, y1)) {
        v1 = n-max(x1, y1)+1;
    } else {
        v1 = min(x1, y1);
    }

    if(max(x2, y2)-n/2 > n/2-min(x2, y2)+1) {
    //if(max(x2, y2)-n/2 <= min(x2, y2)) {
        v2 = n-max(x2, y2)+1;
    } else {
        v2 = min(x2, y2);
    }
    cout<<abs(v1-v2)<<"\n";
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
