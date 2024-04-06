#include <bits/stdc++.h>
using namespace std;

template<class T, class F>
T first_true(T l, T r,  F&& f) {
    l--, r++;
    while(r - l > 1) {
        T mid = midpoint(l, r); // l + (r-l)/2
        if(f(mid)) {
            l = mid; 
        } else {
            r = mid;
        }
   }
    return r;
}

int main() {
}
