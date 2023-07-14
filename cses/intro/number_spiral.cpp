#include <bits/stdc++.h>

using namespace std;

using ll = int64_t;

int main() {
	int n; cin>>n;
	while(n--) {
		ll x, y;
		cin>>x>>y;
		ll ans;
		if(x >= y) {
			if(x%2 == 0) {
				ans = (x*x)-y+1;
			} else {
				x--;
				ans = (x*x)+1;
			}
		} else {
			if(y%2) {
				ans = (y*y)-x+1;
			} else {
				y--;
				ans = (y*y)+1;
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}
