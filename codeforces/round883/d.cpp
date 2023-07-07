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
	double n, d, h;
	cin>>n>>d>>h;
	vector<double> a(n);
	for(int i=0; i<n; i++) cin>>a[i];
	sort(all(a));
	double ans = 0;
	for(int i=0; i<n; i++) {
		if(i != n-1) {
			if(a[i+1]-a[i] >= h) {
				ans += (double)(d*h)/2;		
			} else {
				double A = (d*h/2);
				double mb = d*((double)(a[i]+h-a[i+1])/h);
				double aa = (double)(a[i]+h-a[i+1]) * mb/2;
				ans += A-aa;		
			}
		} else {
			ans += (double)(d*h)/2;		
		}
	}
	cout<<ans<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
	cout<<setprecision(15);

    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}
