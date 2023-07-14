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
	string s;
	cin>>s;
	int ans = 0;
	bool ok = true;
	for(int i=0; i<(int)s.size(); i+=2) {
		ans++;
		if(i>0 and s[i] != '0')
			ok = false;
	}
	if((int)s.size()%2 and ok) ans--;
	cout<<ans<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
