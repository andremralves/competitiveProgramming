#include <bits/stdc++.h>
using namespace std;

struct Edge {
	int a, b, w;
};

struct cmp {
	bool operator()(const Edge &x, const Edge &y) const { return x.w < y.w; }
};

int main() {
	int M = 4;
	set<Edge, cmp> v;
	for (int i = 0; i < M; ++i) {
		int a, b, w;
		cin >> a >> b >> w;
		v.insert({a, b, w});
	}
	for (Edge e : v) cout << e.a << " " << e.b << " " << e.w << "\n";
}
