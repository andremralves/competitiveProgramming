#include <iostream>

using namespace std;
using ll = int64_t;

int main() {
    ll l, r; 
    cin>>l>>r; cout<<(1ll<<(64-__builtin_clzll(l^r)))-1ll<<"\n";
    return 0;
}
