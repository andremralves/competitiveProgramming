/**
 *    author: mralves 
 *    created: 11-09-2023 11:33:10       
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
    int n; cin>>n;
    string s;
    cin>>s;

    for(int i=0; i<n; i++) {
    }

    int l=0, r = n-1;
    int dif = 0;
    while(l<r) {
        if(s[l] != s[r])
            dif++;
        l++, r--;
    }

    if(dif == 0) {
        if(n%2) {
            for(int i=0; i<=n; i++) {
                cout<<"1";
            }
        } else {
            for(int i=0; i<=n; i++) {
                if(i%2)
                    cout<<"0";
                else
                    cout<<"1";
            }
        }
        cout<<"\n";
    } else {
        if(n%2) {
            for(int i=0; i<=n; i++) {
                if(i >= dif and i<= n-dif and (i-dif)%2==0) {
                    cout<<"11";
                    i++;
                }
                else
                    cout<<"0";
            }
        } else {
            for(int i=0; i<=n; i++) {
                if(i >= dif and i<= n-dif and (i-dif)%2==0)
                    cout<<"1";
                else
                    cout<<"0";
            }
        }
        cout<<"\n";
    }
}
// 11110|11111
// 1111011111
//
//

// 01100|11111
// 11111|11111
//
// 3 - 5 - 7
//
// 01100|11111
// 11111|11111
// 10011|0|11001

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}
