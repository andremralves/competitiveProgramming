#include <iostream>

using namespace std;

int main() {
    // Read the input
    int x, a, b;
    cin >> x >> a >> b;

    // Calculate the number of days that have passed since the food was bought
    int days_passed = a + b;

    // Compare the number of days that have passed to the "best-by" date and X
    if (days_passed <= a) {
        cout << "delicious" << endl;
    } else if (days_passed <= x) {
        cout << "safe" << endl;
    } else {
        cout << "dangerous" << endl;
    }

    return 0;
}

