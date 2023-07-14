#include <bits/stdc++.h>

using namespace std;

int main() {

    vector<int> a{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    //binary search implementation
    // using index = 1
        int l = 1, r = 10;

    int target = 3;
    int pos = 0;
    while (l < r-1) {
        int m = (r+l)/2;
        cout<<m<<"\n";
        if(a[m] == target) {
            pos = m;
            break;
        }
        if(a[m] < target)
            l = m;
        else
            r = m;
    }

    cout<<pos<<"\n";
    return 0;
}

