/**
 *    author: mralves 
 *    created: 26-06-2023 22:57:55       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()

using namespace std;
using ll = int64_t;
using ii = pair<int, int>;

ll ceil(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
vector<ii> dir4 = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
vector<ii> dir8 = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};

const double PI = 3.141592653589793;

double circumcircle(double a, double b, double c) {
    //return (a*b*c)/sqrt((a+b+c)*(a+b-c)*(a+c-b)*(b+c-a));

    return a/(sqrt(3));
}

void solve() {
    double R, k, d;
    cin>>R>>k>>d;
    double r = R*k;
    double sT = r*sqrt(3);
    double aT = sqrt(3)*sT*sT/4;
    aT = aT - aT/4;
    double aC = PI*R*R - PI*r*r;
    cout<<(aT+aC)*0.5*d<<"\n";

}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
