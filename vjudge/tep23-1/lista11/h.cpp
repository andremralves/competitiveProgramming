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

vector<ll> p2(21);

void solve() {
	p2[0] = 1;
	for(int i=1; i<=20; i++) {
		p2[i] = p2[i-1]*2;
	}
	int n, l, r;
	cin>>n>>l>>r;
	ll mi = 0, ma = 0;
	for(int i=0; i<l; i++) {
		mi += p2[i];
	}
	mi += n-l;
	for(int i=0; i<r; i++) {
		ma += p2[i];
		if(i == r-1) {
			ma += p2[i]*(n-r);
		}
	}
	cout<<mi<<" "<<ma<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
