/**
 *    author: mralves 
 *    created: 17-02-2023 16:10:47       
**/
#include <bits/stdc++.h>

#define pb(x) push_back(x)

using namespace std;
using ll = int64_t;

void solve() {

}

int main ()
{
    int n;
    cin>>n;
    cout<<n<<" horas de tratamento:\n";
    int flag = 0;
    if(n%3 == 0) {
        flag = 1;
        cout<<"Troca do soro\n";
    } 
    if(n%5 == 0) {
        flag = 1;
        cout<<"Injecao de antibioticos\n";
    }
    if(n%12 == 0) {
        flag = 1;
        cout<<"Reavaliacao\n";
    }
    if(!flag) {
        cout<<"Monitoramento dos sinais vitais\n";
    }
    return 0;
}
