/**
 *    author: mralves 
 *    created: 04-02-2023 13:16:45       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

void solve() {

}

int main ()
{
    int a[4];
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    int ans = min(a[3], a[1])-max(a[0], a[2]);
    cout<<(ans < 0 ? 0 : ans) << "\n";
    return 0;
}
