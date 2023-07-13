/**
 *    author: mralves 
 *    created: 11-07-2023 11:34:59       
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
	vector<ll> a(n);
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}
	if(*max_element(all(a)) < 0) {
		cout<<*max_element(all(a))<<"\n";
		return;
	}

	ll sum1 = 0;
	for(int i=0; i<n; i+=2) {
		if(a[i] < 0) continue;
		sum1 += a[i];
	}
	ll sum2 = 0;
	for(int i=1; i<n; i+=2) {
		if(a[i] < 0) continue;
		sum2 += a[i];
	}
	cout<<max(sum1, sum2)<<"\n";
	return;
}


// 1 1 1 1 -1
// 2 1 -1
// 2 

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}
