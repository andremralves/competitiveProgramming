/**
 *    author: mralves 
 *    created: 09-09-2023 12:44:59       
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

void solve() {
    map<string, int> mp = {
        { "tourist", 3858 },
        { "ksun48", 3679 },
        { "Benq", 3658 },
        { "Um_nik", 3648 },
        { "apiad", 3638 },
        { "Stonefeang", 3630 },
        { "ecnerwala", 3613 },
        { "mnbvmar", 3555 },
        { "newbiedmy", 3516 },
        { "semiexp", 3481 }
    };


    string s;
    cin>>s;
    cout<<mp[s]<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
