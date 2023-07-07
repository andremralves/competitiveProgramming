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
	vector<string> vs(3);
	cin>>vs[0]>>vs[1]>>vs[2];

	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			for(auto [x, y]:dir8) {
				char c = vs[i][j];
				if(c == '.') continue;
				int cnt = 1;
				int ii = i+x, jj = j+y;
				while(ii<3 and jj<3 and ii>=0 and jj>=0) {
					if(vs[ii][jj] == c)
						cnt++;
					ii+=x;jj+=y;
				}
				if(cnt == 3) {
					cout<<c<<"\n";
					return;
				}
			}
		}
	}
	cout<<"DRAW\n";

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
