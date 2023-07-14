/**
 *    author: mralves 
 *    created: 02-05-2023 00:53:22       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

void solve() {
    cout<<setprecision(5)<<fixed;
    double a, b, c; 
    cin>>a>>b>>c;
    if(a == 0 and b == 0 and c == 0) {
        cout<<"-1\n";
        return;
    } 
    if(a == 0 and b == 0) {
        cout<<"0\n";
        return;
    }
    if(a == 0) {
        cout<<1<<"\n";
        cout<<(-c)/b<<"\n";
        return;
    }
    double delta = b*b - 4*a*c;
    if(delta < 0) {
        cout<<"0\n";
        return;
    }
    set<double> st;
    double x1 = (-b + sqrt(delta)) / (2*a);
    double x2 = (-b - sqrt(delta)) / (2*a);
    st.insert(x1);
    st.insert(x2);

    cout<<st.size()<<"\n";
    for(auto x: st) {
        cout<<x<<"\n";
    }
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
