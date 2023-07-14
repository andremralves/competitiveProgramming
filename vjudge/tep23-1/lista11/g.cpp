/**
 *    author: mralves 
 *    created: 08-07-2023 21:55:26       
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
	ll n;
	cin>>n;
	if(n%2) {
		cout<<"YES\n";
		return;
	}
	bool ok = false;
	for(ll i=2; i<=n; i++) {
		if(n == 0) break;
		if((i%2 and n%i==0) or n%2) {
			ok = true;
			break;
		}
		while(n%i==0) {
			n/=i;
		}
	}
	cout<<(ok?"YES":"NO")<<"\n";
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
