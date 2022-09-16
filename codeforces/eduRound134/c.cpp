#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int myBSearch(vector<int> arr, int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return myBSearch(arr, l, mid - 1, x);
        return myBSearch(arr, mid + 1, r, x);
    }
    return r+1;
}

int solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n) , ans1, ans2(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    
    for (int i = n-1; i >= 0; i--) {
        int min;
        min = myBSearch(b, 0, n-1, a[i]);
        ans1.push_back(b[min]-a[i]);
    }
    for (int i = n - 1, j = n - 1; i >= 0; i -= 1) {
        ans2[i] = b[j] - a[i];
        if (i and a[i] > b[i - 1])
            j = i - 1;
    }

    for (int i = n-1; i >= 0; i--) {
        cout << ans1[i] << (i == 0 ? "\n" : " ");
    }

    for (int i = 0; i < n; i++) {
        cout << ans2[i] << (i == n-1 ? "\n" : " ");
    }
    
    return 0;
}

int main (int argc, char *argv[])
{
    int t;    
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
