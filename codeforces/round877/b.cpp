/**
 *    author: mralves 
 *    created: 04-06-2023 16:10:11       
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
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    if(a[0] == 1) {
        int i = find(all(a), n) - a.begin(); 
        cout<<2<<" "<<i+1<<"\n";
    } else {
        int one = find(all(a), 1) - a.begin()+1; 
        int two = find(all(a), 2) - a.begin()+1; 
        int last = find(all(a), n) - a.begin()+1; 
        if(one < two and one < last) {
            if(two < last) {
                cout<<two<<" "<<last<<"\n";
            } else {
                cout<<one<<" "<<one<<"\n";
            }
        } else if(two < one and two < last) {
            // 2 1 7
            if(one < last) {
                cout<<one<<" "<<last<<"\n";
            // 2 7 1
            } else {
                cout<<one<<" "<<one<<"\n";
            }
             
        } else if(last < one and last < two) {
            if(one < two) {
                cout<<one<<" "<<last<<"\n";
            } else {
                cout<<last<<" "<<two<<"\n";
            }
        }
    }
}
// 4 1 6 5 2 3
//
// 1 5 6 4 2 3 
//

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}
