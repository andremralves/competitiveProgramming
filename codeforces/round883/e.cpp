/**
 *    author: mralves 
 *    created: 07-07-2023 11:16:19       
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
	
	vector<bool> dp(n+1);
	dp[1] = false;
	for(int i=2; i*i<=n; i++) {
		int j = 1, x = 1;
		while(j<=n) {
			dp[j] = true;			
			j = j + pow(i, x); x++;
		}
	}
	cout<<(dp[n]?"YES\n":"NO\n");
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
