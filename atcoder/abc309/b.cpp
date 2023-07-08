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
	int n;
	cin>>n;
	vector<string> grid(n);
	for(int i=0; i<n; i++) {
		cin>>grid[i];
	}

	auto ans = grid;
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			if(i != n-1 and i != 0 and j != n-1 and j != 0) continue;
			if(i == 0) {
				if(j != n-1)
					ans[i][j+1] = grid[i][j];
				else
					ans[i+1][j] = grid[i][j];
			} else if(j == n-1) {
				if(i != n-1)
					ans[i+1][j] = grid[i][j];
				else
					ans[i][j-1] = grid[i][j];
			} else if(i==n-1) {
				if(j != 0)
					ans[i][j-1] = grid[i][j];
				else
					ans[i-1][j] = grid[i][j];
			} else if(j==0){
				if(i != 0)
					ans[i-1][j] = grid[i][j];
				else
					ans[i][j+1] = grid[i][j];
			}
		}
	}

	for(auto s: ans) {
		cout<<s<<"\n";
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
