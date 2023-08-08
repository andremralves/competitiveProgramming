/**
 *    author: mralves 
 *    created: 07-08-2023 11:35:06       
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
    string s;
    cin>>s;
    string orig = s;
    int n = s.size();
    reverse(s.begin(), s.end());
    string ans;
    for(int i=0; i<n; i++) {
        if(s[i]-'0'>=5) {
            ans+='0';
            int j = i+1;
            while(j<n) {
                if(s[j] == '9') {
                    s[j] = '0';
                } else {
                    s[j]+=1;
                    break;
                }
                j++;
            }
        } else {
            ans+=s[i];
        }
    }
    if(ans[n-1] == '0') ans+='1';
    reverse(all(ans));
    for(int i=0; i<(int)ans.size(); i++) {
        if(i == n or orig[i] != ans[i]) {
            cout<<ans[i];
            i++;
            while(i < (int)ans.size()) {
                cout<<"0";
                i++;
            }
        } else {
            cout<<ans[i];
        }
    }
    cout<<"\n";
}

// 60947
// 60950
// 61007

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}
