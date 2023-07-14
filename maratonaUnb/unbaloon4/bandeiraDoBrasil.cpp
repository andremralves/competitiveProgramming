#include <bits/stdc++.h>

#define PI 3.141592653589793
using namespace std;

int main() {

    double a, b;
    cin>>a>>b;
    double rec = a*b;
    double los = a*b/2;
    // base do losango
    double B = sqrt((a/2)*(a/2) + ((b/2)*(b/2)));
    // altura do losango
    double h = (a*b/2)/B;
    // raio do circulo
    double r = h/2;
    double circ = PI*r*r;

    cout<<fixed;
    cout<<setprecision(8);
    cout<<rec-los<<" "<<los-circ<<" "<<circ<<"\n";

    return 0;
}
