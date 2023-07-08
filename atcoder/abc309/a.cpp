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
	int a, b;
	cin>>a>>b;
	
	int x = a%3;
	int y = b%3;
	if(x == 0) x = 3;
	if(y == 0) y = 3;
	if((abs(ceil(a, 3)-ceil(b, 3)) < 1 and abs(x-y)<=1)) {
		cout<<"Yes\n";
	} else {
		cout<<"No\n";
	}
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
