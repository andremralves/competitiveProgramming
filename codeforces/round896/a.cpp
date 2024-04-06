/**
 *    author: mralves 
 *    created: 10-09-2023 10:48:59       
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

vector<int> a;
int my_xor(int l, int n) {
    int x = 0;
    for(int i=l; i<n; i++) {
        x ^= a[i];
    }
    return x;
}

void solve() {
    int n;
    cin>>n;

    a.resize(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    if(n % 2 == 0) {
        cout<<"2\n";
        cout<<1<<" "<<n<<"\n";
        cout<<1<<" "<<n<<"\n";
    } else {
        cout<<"4\n";
        cout<<1<<" "<<2<<"\n";
        cout<<1<<" "<<2<<"\n";
        cout<<2<<" "<<n<<"\n";
        cout<<2<<" "<<n<<"\n";
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
