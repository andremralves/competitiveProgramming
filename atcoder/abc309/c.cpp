/**
 *    author: mralves 
 *    created: 08-07-2023 09:16:48       
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
	ll n, k;
	cin>>n>>k;
	map<ll, ll> mp;
	for(int i=0;i<n; i++) {
		ll a, b;
		cin>>a>>b;
		mp[a] += b;
	}
	//ll sum = 0;
	ll day = (*mp.rbegin()).first+1;
	auto it = mp.rbegin();
	for(; it!=mp.rend(); it++) { 
		if(k < 0) break;
		k -= it->second;
		day = it->first+1;
	}

	if(k >= 0 ) day = 1;
	cout<<day<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
