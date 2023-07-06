/**
 *    author: mralves 
 *    created: 06-07-2023 11:35:45       
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
	int n, k;
	cin>>n>>k;
	vector<int> a(n);
	vector<ii> b(n);

	int sum = 0;
	for(int i=0; i<n; i++) {
		cin>>a[i];
		if(i > 0) {
			b[i] = {abs(a[i]-a[i-1]), i};
			sum += abs(a[i]-a[i-1]);
		}
	}

	sort(b.rbegin(), b.rend());

	for(int i=0; i<n; i++) {
		if(k == 1) break;
		sum -= b[i].first; k--;
	}
	cout<<sum<<"\n";
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
