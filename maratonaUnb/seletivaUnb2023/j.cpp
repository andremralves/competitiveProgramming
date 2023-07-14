#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b, int& x, int& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}

int main() {
	int n;
	cin>>n;
	int a = 2;
	while(gcd(a, n) > 1) {
		a++;
	}

	int x, y;
	int g = gcd(a, n, x, y);
	// x may be negative
	x = (x%n+n) %n;
	cout<<x<<"\n";

	return 0;
}
