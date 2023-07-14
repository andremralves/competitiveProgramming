/**
 *    author: mralves 
 *    created: 18-11-2022 19:40:58       
**/
#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

void solve() {
    string binderName;
    ll m, n, b;
    cin.ignore();
    getline(cin, binderName);
    //cout<<binderName<<"\n";
    cin>>m>>n>>b;
    //cout<<m<<n<<b<<"\n";
    map<string, int> prices;
    multimap<int, string> recipes;
    for (int i = 0; i < m; i++) {
        string s;
        int p;
        cin>>s>>p;
        prices.insert({s, p});
    }
    for (int i = 0; i < n; i++) {
        string name;
        int k;
        cin.ignore();
        getline(cin,name);
        //cout<<name<<"\n";
        cin>>k;
        ll sum = 0;
        for (int j = 0; j < k; j++) {
            string s;
            int qtd;
            cin>>s>>qtd;
            sum += qtd*prices[s];
        }
        if(sum <= b) {
            recipes.insert({sum, name});
        }
    }
    for(auto &c : binderName) {
        c = toupper(c);
    }
    cout<<binderName<<"\n";
    if(recipes.size() == 0) {
        cout<<"Too expensive!\n";
    }
    for(auto r : recipes) {
        cout<<r.second<<"\n";
    }
    cout<<"\n";
}

int main (int argc, char *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}
