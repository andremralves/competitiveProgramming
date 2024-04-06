/**
 *    author: mralves 
 *    created: 29-07-2023 11:34:26       
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
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }


    int mx = *max_element(all(a));
    int mi = *min_element(all(a));

    int op = 0;
    vector<ii> b;

    if(mx == mi) {
        cout<<0<<"\n";
        return;
    }

    if(mx <= 0) {
        int pos = min_element(all(a))-a.begin();
        while(a[pos] > -20) {
            a[pos] += a[pos];
            b.push_back({pos+1, pos+1});
            op++;
        }
        for(int i=n-1; i>=1; i--) {
            while(a[i] < a[i-1]) {
                int mipos = min_element(all(a))-a.begin();
                a[i-1] += a[mipos];
                b.push_back({i, mipos+1});
                op++;
            }
        }
    } else {
        int pos = max_element(all(a))-a.begin();
        while(a[pos] < 20) {
            a[pos] += a[pos];
            b.push_back({pos+1, pos+1});
            op++;
        }
        for(int i=1; i<n; i++) {
            while(a[i] < a[i-1]) {
                int mxpos = max_element(all(a))-a.begin();
                a[i] += a[mxpos];
                b.push_back({i+1, mxpos+1});
                op++;
            }
        }
    }

    cout<<op<<"\n";
    for(int i=0; i<(int)b.size(); i++) {
        cout<<b[i].first<<" "<<b[i].second<<"\n";
    }

    //for(auto x : a) {
    //    cout<<x<<" ";
    //}
    //cout<<"\n";
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
