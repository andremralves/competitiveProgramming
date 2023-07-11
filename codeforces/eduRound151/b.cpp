/**
 *    author: mralves 
 *    created: 10-07-2023 23:18:40       
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
	int ax, ay;
	int bx, by;
	int cx, cy;
	cin>>ax>>ay;
	cin>>bx>>by;
	cin>>cx>>cy;

	ll ans = 1;
	if((bx > ax and cx > ax) or (bx<ax and cx<ax))	{
		ans += min(abs(bx-ax), abs(ax-cx));
	}

	if((by > ay and cy > ay) or (by < ay and cy < ay))	{
		ans += min(abs(by-ay), abs(cy-ay));
	}
	cout<<ans<<"\n";
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
