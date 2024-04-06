/**
 *    author: mralves 
 *    created: 16-08-2023 16:49:55       
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

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
 
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ", "; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? ", " : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifdef DEBUG
#define dbg(x...) cerr << "\e[91m"<<__func__<<":"<<__LINE__<<" [" << #x << "] = ["; _print(x); cerr << "\e[39m" << endl;
#else
#define dbg(x...)
#endif

void solve() {
    string a, s;
    cin>>a>>s;
    reverse(all(a)); reverse(all(s));

    string b;
    int j = 0;
    bool ok = true;
    string s2;
    for(int i=0; i<(int)a.size(); i++) {
        int si = s[j]-'0';
        int ai = a[i]-'0';
        char c;
        if(j >= (int)s.size()) {
            ok = false;
            break;
        }
        if(s[j] < a[i]) {
            c = si+10-ai+'0';
            s2 += s[j];
            s2 += '1';
            j+=2;
        } else {
            c = si-ai+'0';
            s2 += s[j];
            j++;
        }
        b += c;
    }
    while(j < (int)s.size()) {
        b += s[j];
        s2 += s[j];
        j++;
    }
    if(s != s2) ok = false;
    reverse(all(b));
    int i = 0;
    while(b[i] == '0') i++;
    cout<<(ok?b.substr(i):"-1")<<"\n";
}

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}
