/**
 *    author: mralves 
 *    created: 06-05-2023 09:07:55       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

void solve() {
    int k;
    string a, b;
    cin>>k>>a>>b;
    int dA = 0, dB = 0;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int pot = 0;
    for(auto c: a) {
        int x = c - '0';
        dA += pow(k, pot) * x;
        pot++;
    }
    pot = 0;
    for(auto c: b) {
        int x = c - '0';
        dB += pow(k, pot) * x;
        pot++;
    }

    cout<<(ll)dA*dB<<"\n";

}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    //cin>>t;
    while (t--) solve();
    return 0;
}
