#include <bits/stdc++.h>

using namespace std;

template<class T, class F>
T first_true(T l, T r,  F&& f) {
    l--, r++;
    while(r - l > 1) {
        T mid = midpoint(l, r);
        if(f(mid)) {
            l = mid; 
        } else {
            r = mid;
        }
   }
    return r;
}



int main() {

    int x = 1;
    vector<int> a(2);
    iota(a.begin(), a.end(), 1);

    auto f = [&](int i) {
        return a[i] < x;
    };

    auto ans = first_true(0, (int)a.size()-1, f);
    cout<<a[ans]<<"\n";


    cout<<(-10+5)/2<<"\n";
    cout<<-10+(5-(-10))/2<<"\n";
    cout<<midpoint(-10, 5)<<"\n";
}

