/**
 *    author: mralves 
 *    created: 09-05-2023 23:13:26       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

void solve() {
	int n; cin>>n;
	vector<int> a(n-1);
	for(int i=0; i<n-1; i++) cin>>a[i];
	sort(all(a));
	int i;
	for(i=0; i<n-1; i++) {
		if(a[i] != i+1) {
			break;
		}
	}
	cout<<i+1<<"\n";

}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
