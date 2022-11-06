#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main (int argc, char *argv[])
{
    while(cin) {
        vector<int> arr1;
        vector<int> arr2;
        for (int i = 0; i < 5; i++) {
            int tmp;
            cin>>tmp;
            if(!cin) return 0;
            arr1.push_back(tmp);
        }
        for (int i = 0; i < 5; i++) {
            int tmp;
            cin>>tmp;
            arr2.push_back(tmp);
        }
        char ans = 'Y';
        for (int i = 0; i < 5; i++) {
            if(arr1[i] == arr2[i]) {
                ans = 'N';
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
