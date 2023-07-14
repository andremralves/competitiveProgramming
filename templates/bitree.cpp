#include <bits/stdc++.h>

using namespace std;

#define LSOne(S) ((S) & -(S))
typedef vector<int> vi;

// Simple version
class Bitree {

private:
    vi ft;
public:
    Bitree(int m) { ft.assign(m+1, 0); }

    int rsq(int j) {
        int sum = 0;
        for(; j; j -= LSOne(j)) 
            sum += ft[j];
        return sum;
    }

    int rsq(int i, int j) {
        return rsq(j) - rsq(i-1);
    }

    void update(int i, int v) {
        for(; i < (int)ft.size(); i += LSOne(i))
            ft[i] += v;
    }

};

// implementation
int main() {
    Bitree bt(10);
    bt.update(1, 0);
    bt.update(2, 1);
    bt.update(3, 0);
    bt.update(4, 1);
    bt.update(5, 2);
    bt.update(6, 3);
    bt.update(7, 2);
    bt.update(8, 1);
    bt.update(9, 1);
    cout<<"rsq(1): "<<bt.rsq(1)<<"\n";
    cout<<"rsq(2): "<<bt.rsq(2)<<"\n";
    cout<<"rsq(3): "<<bt.rsq(3)<<"\n";
    cout<<"rsq(4): "<<bt.rsq(4)<<"\n";
    cout<<"rsq(5): "<<bt.rsq(5)<<"\n";
    cout<<"rsq(6): "<<bt.rsq(6)<<"\n";
    cout<<"rsq(7): "<<bt.rsq(7)<<"\n";
    cout<<"rsq(8): "<<bt.rsq(8)<<"\n";
    cout<<"rsq(9): "<<bt.rsq(9)<<"\n";
    cout<<LSOne(8)<<"\n";
}

