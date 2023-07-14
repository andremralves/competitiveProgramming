#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, k;
	string s;
	cin>>n>>k;
	cin>>s;

	if(k == 0) {
		cout<<s<<"\n";
		return 0;
	}

	vector<vector<string>> dp(k, vector<string>(n*n));

	for(int i=0; i<k; i++) {
		string s2 = "";
		if(i == 0)
			s2 = s;
		else {
			for(int j=0; j<n*n; j++) {
				s2 = max(s2, dp[i-1][j]);
			}
		}
		int j = 0;
		for(int l=0; l<n; l++) {
			for(int m=0; m<n; m++) {
				dp[i][j] = s2;
				swap(dp[i][j][l], dp[i][j][m]);
				j++;
			}
		}
	}

	string ans = "";
	for(int i=0; i<n*n; i++) {
		ans = max(dp[k-1][i], ans);
	}
	cout<<ans<<"\n";
    return 0;
}

// 12345
// 2 -> 21345 -> ->
// 3 -> 31245 -> 32145 ->
// 4 -> 
