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
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    int p1=0, p2=0;
    int j = n-1, i = 0;
    bool isP1 = true;
    while(j>=i) {
        int x = 0;
        if(a[i] > a[j]) {
            x = a[i];
            i++;
        } else {
            x = a[j];
            j--;
        }
        isP1 ? p1+=x : p2+=x;
        isP1 = !isP1;
    }
    cout<<p1<<" "<<p2<<"\n";
    return 0;
}
