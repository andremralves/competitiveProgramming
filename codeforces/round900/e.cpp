/**
 *    author: mralves 
 *    created: 26-09-2023 11:33:14       
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
    for(int i= 0;i<n; i++) {
        cin>>a[i];
    }

    vector<int> psum(n);
    psum[0] = 0;
    for(int i=1; i<n; i++) {
        int mask = 1;
        int val = 0;
        while(mask<=a[i]) {
            if((mask&a[i])==0) {
                val += mask;
            }
            mask<<=1;
        }
        psum[i] = val | psum[i-1];
    }

    for(auto x: psum) {
        cout<<x<<" ";
    }
    cout<<"\n";

    int q;
    cin>>q;
    while(q--) {
        int k, l;
        cin>>l>>k;
        //int r = lower_bound(all(psum), k) - psum.begin();
        //if(r == n) {
        //    cout<<"-1 ";
        //}  else {
        //    cout<<r+1<<" ";
        //}
    }
    cout<<"\n";
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
