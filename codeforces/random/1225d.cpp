#include<bits/stdc++.h>

using namespace std;

using ll = int64_t;
using pii = pair<int, int>;

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

const ll MAX = 1e5;

int main() {
    int n, k;
    cin>>n>>k;


    ll ans = 0;
    map<vector<pii>, int> mp;
    for(int i=0; i<n; i++) {
        ll x;
        cin>>x;

        int y = x;
        vector<pii> a, b;
        for(int j=2; j*j<=x; j++) {
            int p = 0;
            while(x%j == 0) {
                x/=j;
                p++;
            }

            if(p%k > 0) {
                a.emplace_back(j, p%k);
                b.emplace_back(j, k-p%k);
            }
        }
        if(x != 1) {
            a.emplace_back(x, 1);
            b.emplace_back(x, k-1);
        }
        dbg(y, a, b);
        ans += mp[b];
        mp[a]++;
    }

    cout<<ans<<"\n";
    return 0;
}

// 7 - 0
// 4 - 0
// 10 - 0
// 9 - 1
// 2 - 0
// 8 - 0
// 8 - 1
// 7 - 2
// 3 - 0
// 7 - 3
