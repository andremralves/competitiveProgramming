/**
 *    author: mralves 
 *    created: 12-06-2023 11:34:04       
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

const int INF = 1e9;
const int N = 200200;
const int K = 5;
int p10[K];

int dp[N][K][2];

void solve() {
    string s;
    cin>>s;
    int n = s.size();
    reverse(all(s));
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<K; j++) {
            for(int k=0; k<2; k++) {
                dp[i][j][k] = -INF;
            }
        }
    }
    dp[0][0][0] = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<K; j++) {
            for(int k=0; k<2; k++) {
                int c = s[i]-'A';
            }
        }
    }
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    p10[0] = 1;
    for(int i=1; i<K; i++) {
        p10[i] = p10[i-1] * 10;
    }
    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}
