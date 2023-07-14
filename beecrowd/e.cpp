#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;
using ii = pair<int, int>;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
vector<ii> dir4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
vector<ii> dir8 = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};


//
// 76 85 81 80 109 82
// 7 10 11 12 16 17 
//
// 76 80 81 82 85 109
// 16 12 11 10 7  17
//
// 4 1 1 3 24
//
// 7 10 11 12 16 17
// 3 1 1 4 1
//
// 2 2 2
// 0 0 0
//
// 1 1 1
// 0 0 0
//
//
// 57 65 69 72 73 79 99 107 108 127
// 8 4 3 1 6 20 8 1 19
//
// 5 13 14 15 21 22 25 29 33
// 8 1 1 5 1 3 4 
void solve() {
    int n;
    cin>>n;
    vector<int> a(n), b(n);
    vector<int> da(n-1), db(n-1);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }
    for(int i=0; i<n; i++) {
        cin>>b[i];
    }

    sort(all(a));
    sort(all(b));

    for(int i=1; i<n; i++) {
        da[i-1] = a[i]-a[i-1];
        db[i-1] = b[i]-b[i-1];
    }

    sort(all(da));
    sort(all(db));

    bool found = false;
    int pos = 0;
    for(int i=1; i<n-1; i++) {
        if(count(all(db), da[i]) == 0) {
            cout<<da[i]<<"\n";
            pos = i;
            break;
        }
    }

    cout<<a[pos]<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
