/**
 *    author: mralves 
 *    created: 06-12-2022 13:04:59       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;


int main (int argc, char *argv[])
{
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    cout<<*max_element(a.begin(), a.end())- *min_element(a.begin(), a.end())<<"\n";
     
    return 0;
}
