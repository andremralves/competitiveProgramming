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
	int i = n;
	if(n > 3) {
		cout<<2<<" ";
		int mid = (n-2)/2;
		int cnt = 0;
		for(int i=4; i<=n; i++) {
			cout<<i<<" ";
			cnt++;
			if(cnt == mid) {
				cout<<1<<" ";
			}
		}
		cout<<"3";
	} else if(n == 3) {
		cout<<"2 1 3";
	} else {
		for(int i=1; i<=n; i++) {
			cout<<i<<" ";
		}
	}
	cout<<"\n";
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
