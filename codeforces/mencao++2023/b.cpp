/**
 *    author: mralves 
 *    created: 22-07-2023 09:40:15       
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

void solve(int t) {
    int b, n;
    cin>>b>>n;
    int ans = b;
    ans += max(n-3, 0)*100;
    if(n > 3 and n <= 7) {
        ans += ans/4;
    } else if(n > 7) {
        ans += ans/2;
    }
    if(ans == 1)
        cout<<"Caso "<<t<<": "<<ans<<" ponto\n";
    else
        cout<<"Caso "<<t<<": "<<ans<<" pontos\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin>>t;
    for(int i=1; i<=t; i++) {
        solve(i);
    }
    return 0;
}
