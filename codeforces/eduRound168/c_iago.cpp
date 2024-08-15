#include <bits/stdc++.h>
using namespace std;

auto run() {
	int N;
	cin >> N;

	string S;
	cin >> S;

	int ans = 0;

	vector<pair<int, char>> stk;
	for (int i = 0; i < N; i++) {
		auto si  = S[i];

		if (si == '_') {
			if (!stk.empty()) {
				auto [p, c] = stk.back();
				if (c == '(' or c == '_') {
					stk.pop_back();
					ans += (i-p);
				}
				else stk.emplace_back(i, si);
			}
			else stk.emplace_back(i, si);
		}
		else {
			if (si == '(')
				stk.emplace_back(i, si);
			else {
				if (!stk.empty()) {
					auto [p, c] = stk.back();
					if (c == '(' or c == '_') {
						stk.pop_back();
						ans += (i-p);
					}
					else stk.emplace_back(i, si);
				}
			}
		}
	}

	cout << ans << '\n';
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int T = 1;
	cin >> T;

	for (int i = 1; i <= T; i++) {
		run();
	}

}

/*
	6
	_(_)_)

	2
	_)

	8
	_)_)_)_)

	8
	_(_)_(_)


	gulosao ?
 */

