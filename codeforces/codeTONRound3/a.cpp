#include <bits/stdc++.h>

using namespace std;

// 1 3 2
bool sorted;
void recursion(int arr[], int n, int cnt) {
    if(cnt > 10) return;
    if(sorted) return;
    cnt++;
    int newArr[n];
    for(int i=0; i<n; i++) {
        newArr[i] = arr[i];
    }
    for(int i = 0; i<n-2; i++) {
        for (int j = i+1; j < n-1; j++) {
            for (int k = j+1; k < n; k++) {
                if(arr[i] > arr[k]) {
                    newArr[i] = arr[i] + arr[j];
                } else {
                    newArr[k] = arr[j];
                    newArr[j] = arr[k];
                }
                sorted = true;
                for (int i = 0; i < n-1; i++) {
                    if(newArr[i]>newArr[i+1]) {
                        sorted = false;
                    }
                }
                if(sorted) return;
                else {
                    recursion(newArr, n, 0);
                }
            }
        }
    }
}

void solve() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[n];
    }
    recursion(arr, n, 10);
    cout<<sorted<<endl;
}

int main (int argc, char *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();    
    }
    return 0;
}
