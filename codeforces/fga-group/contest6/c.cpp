/**
 *    author: mralves 
 *    created: 08-08-2023 15:59:46       
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

    int cnt = 0;
    for(int i=0; i<n; i++) {
        int j = i;
        while(j<n-1 and a[j+1]-a[j] == 1) {
            j++;
        } 
        cnt++;
        i = j;
    }
    cout<<cnt<<" ";
    if(n%2)
        cout<<ceil(n-cnt, 2)<<"\n";
    else
        cout<<ceil(n-cnt, 2)+1<<"\n";

}

// 3 2 1 6 5 4
// 2 3 1 6 4 5
// 1 2 3 4 5 6

// 2 3 1 6 4 5
// 1 2 3 4 5 6

// 1 2 3 6 5 4

// 6 1 2 3 5 4


int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}
