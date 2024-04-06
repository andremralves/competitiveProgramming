/**
 *    author: mralves 
 *    created: 07-09-2023 11:32:36       
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
    int l, r;
    cin>>l>>r;

    if(r%2==0 and gcd(r/2, r/2) > 1) {
        cout<<r/2<<" "<<r/2<<"\n";
        return;
    } else if(r-1 >= l and gcd((r-1)/2, (r-1)/2) > 1) {
        cout<<(r-1)/2<<" "<<(r-1)/2<<"\n";
        return;
    }
    
    int x = l;
    for(int i=2;i*i<=l; i++) {
        if(x%i == 0 and gcd(x/i, (x/i)*(i-1))>1) {
            cout<<(x/i)<<" "<<(x/i)*(i-1)<<"\n";
            return;
        }
    }
    cout<<"-1\n";
    
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
