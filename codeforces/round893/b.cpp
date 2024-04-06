/**
 *    author: mralves 
 *    created: 22-08-2023 22:14:01       
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
    int n, m, d;
    cin>>n>>m>>d;

    vector<int> a(m);
    for(int i=0; i<m; i++) {
        cin>>a[i];
    }

    int cnt = (bool)(a[0] != 1);
    vector<int> psum(m+2);
    for(int i = 0; i<m; i++) {
        int dis = a[i]-(i > 0 ? a[i-1] : 1);
        cnt += (dis+d-1)/d;
        psum[i+1] = cnt;
    }
    cnt += (n-a[m-1])/2;
    psum[m+1] = cnt;
    dbg(cnt);

    map<int, int> mp;
    for(int i=2; i<m; i++) {
        int x = (a[i]-a[i-2])/d;
        x -= (psum[i+1]-psum[i-1])-1;
        dbg(x);
        mp[cnt-max(0, x)]++;
    }
    int x = (n-a[m-2])/d;
    x -= (psum[m+1]-psum[m-1])-1;
    mp[cnt-max(0, x)]++;

    auto ans = mp.begin();
    cout<<ans->first<<" "<<ans->second<<"\n";

}

// 1 2 3 4 5 6 7 8
// 1   1   1   1 1

int main ()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t = 1;
    cin>>t;
    while (t--) solve();
    return 0;
}
