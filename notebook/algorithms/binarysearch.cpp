#include <bits/stdc++.h>
using namespace std;

int last_true(int lo, int hi, function<bool(int)> f) {
	// if none of the values in the range work, return lo - 1
	lo--;
	while (lo < hi) {
		// find the middle of the current range (rounding up)
		int mid = lo + (hi - lo + 1) / 2;
		if (f(mid)) {
			// if mid works, then all numbers smaller than mid also work
			lo = mid;
		} else {
			// if mid does not work, greater values would not work either
			hi = mid - 1;
		}
	}
	return lo;
}

//We will need to do the same thing, but when the condition is satisfied, 
//we will cut the right part, and when it's not, the left part will be cut.
int first_true(int lo, int hi, function<bool(int)> f) {
	hi++;
	while (lo < hi) {
		int mid = lo + (hi - lo) / 2;
		if (f(mid)) {
			hi = mid;
		} else {
			lo = mid + 1;
		}
	}
	return lo;
}

int main() {
	// all numbers satisfy the condition (outputs 10)
	cout << last_true(2, 10, [](int x) { return true; }) << endl;

	// outputs 5
	cout << last_true(2, 10, [](int x) { return x * x <= 30; }) << endl;

	// no numbers satisfy the condition (outputs 1)
	cout << last_true(2, 10, [](int x) { return false; }) << endl;
}
