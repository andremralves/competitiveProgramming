#include <bits/stdc++.h>

//input 101011001
// 

using namespace std;

int solve(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        if(count%2 == 0) {
            if(num == 0) count++;
        } else {
            num = !num;
            if(num == 0) count++;
        }
    }
    cout << count << "\n";
    return 1;
}

int main (int argc, char *argv[])
{
    int arr[3] = {1, 0, 1};
    int n = 3;
    solve(arr, n);
    return 0;
}
