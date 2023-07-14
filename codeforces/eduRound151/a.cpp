/**
 *    author: mralves 
 *    created: 05-07-2023 22:27:03       
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
	int n, k, x;
	cin>>n>>k>>x;
	vector<int> ans;
	if(x != 1) {
		for(int i=0; i<n; i++) {
			ans.push_back(1);
		}
	} else {
		if(n%2 == 0) {
			if(k >=2) {
				while(n) {
					ans.push_back(2);
					n-=2;
				}
			} else {
				cout<<"NO\n";
				return;
			}
		} else {
			if(k >=3) {
				ans.push_back(3);
				n-=3;
				while(n) {
					ans.push_back(2);
					n-=2;
				}
			} else {
				cout<<"NO\n";
				return;
			}
		}
	}
	cout<<"YES\n";
	cout<<ans.size()<<"\n";
	for(auto i:ans) {
		cout<<i<<" ";
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
