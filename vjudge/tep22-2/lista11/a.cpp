#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main() {
    int x, a, b;
    cin>>x>>a>>b;
    if(abs(x-a) > abs(x-b)) {
        cout<<"B\n";
    } else {
        cout<<"A\n";
    }
    return 0;
}
