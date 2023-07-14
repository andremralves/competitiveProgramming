/**
 *    author: mralves 
 *    created: 11-12-2022 12:58:05       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

vector<int> ps;
vector<int> label;
vector<int> qtds;
vector<int> sums;

int findSet(int p) {
    return ps[p] == p ? p : findSet(ps[p]);
}

bool sameSet(int p, int q) {
    return findSet(p) == findSet(q) ? true : false;
}

void unionSet(int p, int q) {
    //same set
    if(sameSet(label[p], label[q])) return;

    // find sets roots
    int rp = findSet(label[p]);
    int rq = findSet(label[q]);

    //if(qtds[rp] < qtds[rq]) {
    //    swap(rp, rq);
    //}

    ps[rq] = rp;
    qtds[rp] += qtds[rq];
    sums[rp] += sums[rq];
}


void moveToSet(int p, int q) {
    
    // find roots in sets
    int rp = findSet(label[p]);
    int rq = findSet(label[q]);

    //same set
    if(rp == rq) return;

    // add to Q set
    label[p] = rq;

    qtds[rq]++;
    sums[rq]+=p;

    qtds[rp]--;
    sums[rp]-=p;
}

void printSet(vector<int> sets) {
    for(auto item: sets) {
        cout<<item<<" ";
    }
    cout<<"\n";
}

void solve(int n, int m) {

    ps.clear();
    label.clear();
    qtds.clear();
    sums.clear();

    ps.resize(n+1);
    label.resize(n+1);
    qtds.resize(n+1, 1);
    sums.resize(n+1);

    iota(ps.begin(), ps.end(), 0);
    iota(label.begin(), label.end(), 0);
    iota(sums.begin(), sums.end(), 0);

    for (int i = 0; i < m; i++) {
        int op, p, q;
        cin>>op;  
        if(op == 1) {
            //union sets
            cin>>p>>q;
            unionSet(p, q);
        } else if(op == 2) {
            //move to set
            cin>>p>>q;
            moveToSet(p, q);
        } else {
            //print
            cin>>p;
            int rootP = findSet(label[p]);
            cout<<qtds[rootP]<<" "<<sums[rootP]<<"\n";
        }
    }

}

int main ()
{
    int n, m;
    while (cin>>n>>m)
    {
        solve(n, m);    
    }
    return 0;
}
