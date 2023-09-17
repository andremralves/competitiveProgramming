/**
 *    author: mralves 
 *    created: 16-09-2023 09:00:23       
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
    int M;
    string s[3];
    cin>>M>>s[0]>>s[1]>>s[2];

    int ans = M*3+1;
    for(int i=0; i<=9; i++) {
        char c = i+'0';
        vector<int> perm = {0, 1, 2};
        do {
            vector<int> p(3, -1);
            for(int j=0; j<3; j++) {
                for(int k=0; k<M*3; k++) {
                    if(s[perm[j]][k%M] == c) {
                        //cout<<p[0]<<" "<<p[1]<<" "<<p[2]<<"\n";
                        if(j > 0  and k == p[perm[0]]) {
                            continue;
                        }
                        if(j > 1 and k == p[perm[1]]) {
                            continue;
                        }
                        p[perm[j]] = k;
                        break;
                    }
                }
            }
            //cout<<p[0]<<" "<<p[1]<<" "<<p[2]<<"\n";
            if(count(all(p), -1) > 0) continue;
            ans = min(ans, max({p[0], p[1], p[2]}));
        } while(next_permutation(all(perm)));
    }
    cout<<(ans == M*3+1 ? -1 : ans)<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    while (t--) solve();
    return 0;
}
