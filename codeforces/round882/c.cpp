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

const int MAX = 1<<8;

void solve() {
	int n;	
	cin>>n;
	vector<int> a(n);
	for(int i=0; i<n; i++) {
		cin>>a[i];
	}

	set<int> st;
	int sum = 0;
	for(int i=(int)a.size()-1; i>=0; i--) {
		sum = a[i] ^ sum;
		st.insert(sum);
	}
	int ans = *st.rbegin();
	for(int i=0; i<MAX; i++) {
		if(st.count(i) == 0) continue;
		for(int j=0; j<MAX; j++) {
			if(st.count(j)) {
				ans = max(ans, i ^ j);
			}
		}
	}
	cout<<ans<<"\n";
}

// 0000
// 0010 -> 2
// 0101 -> 5
// 0001
// 0001

// 0111 -> 7

// 1100 -> 12
// 000
// 1110 -> 14

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}
