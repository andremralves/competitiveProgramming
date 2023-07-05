/**
 *    author: mralves 
 *    created: 04-07-2023 01:10:29       
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

const ll MOD = 1e9+7;

void solve() {
	int n, x;
	cin>>n>>x;
	set<int> st;
	for(int i=0; i<n; i++) {
		int x; cin>>x;
		st.insert(x);
	}

	vector<ll> dp(x+1, 0);
	for(int i=1; i<=x; i++) {
		dp[i] = st.count(i);
		for(auto v: st) {
			if(i-v > 0) {
				dp[i] = dp[i-v] + dp[i] % MOD;
			}
		}
	}
	cout<<dp[x]%MOD<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
