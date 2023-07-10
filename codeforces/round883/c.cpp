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

typedef struct {
	int i;
	ll time;
	int ac;
}item;

bool cmp (item i,item j) { 
	if(i.ac != j.ac) return i.ac>j.ac;
	if(i.time != j.time) return i.time<j.time; 
	return i.i < j.i;
}

void solve() {
	int n, m, h;
	cin>>n>>m>>h;
	vector<item> ans(n);
	for(int i=0; i<n; i++) {
		vector<int> a(m);
		for(int j=0; j<m; j++) {
			cin>>a[j];
		}
		sort(all(a));
		ll sum = 0;
		ll pen = 0;
		int j;
		for(j=0; j<m; j++) {
			if(sum+a[j] <= h) {
				sum += a[j];
				pen += sum;
			}
			else {
				break;
			}
		}
		ans[i] = {
			.i = i,
			.time = pen,
			.ac = j
		};
	}
	sort(all(ans), cmp);
	for(int i=0; i<n; i++) {
		if(ans[i].i == 0) {
			cout<<i+1<<"\n";
			return;
		}
	}
	cout<<"\n\n";
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
