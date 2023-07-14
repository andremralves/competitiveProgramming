/**
 *    author: mralves 
 *    created: 06-12-2022 13:04:59       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;


int main (int argc, char *argv[])
{
    int t;
    cin>>t;
    priority_queue<int> pq;
    for (int i = 0; i < t; i++) {
        int x;
        cin>>x;
        pq.push(-x);
    }
    while (!pq.empty())
    {
        cout<<-pq.top()<<"\n";
        pq.pop();
    }
    return 0;
}
