/**
 *    author: mralves 
 *    created: 12-08-2023 11:35:10       
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
    int n;
    cin>>n;

    vector<int> ps;
    vector<int> L(n),R(n),A(n),B(n);
    for(int i=0; i<n; i++) {
        cin>>L[i]>>R[i]>>A[i]>>B[i];
        ps.push_back(L[i]);
        ps.push_back(R[i]);
        ps.push_back(A[i]);
        ps.push_back(B[i]);
    }

    int q;cin>>q;
    vector<int> Q(q);
    for(int i=0; i<q; i++) {
        cin>>Q[i];
        ps.push_back(Q[i]);
    }
    sort(all(ps));
    ps.resize(unique(all(ps))-ps.begin());
    for(int i=0; i<n; i++) {
        L[i] = lower_bound(all(ps), L[i])-ps.begin();
        R[i] = lower_bound(all(ps), R[i])-ps.begin();
        A[i] = lower_bound(all(ps), A[i])-ps.begin();
        B[i] = lower_bound(all(ps), B[i])-ps.begin();
    }

    for(int i=0; i<q; i++) {
        Q[i] = lower_bound(all(ps), Q[i])-ps.begin();
    }

    vector<ll> ans(ps.size()+1);
    for(int i=0; i<=(int)ps.size(); i++) {
        ans[i] = i;
    }
    vector<pair<int, ii>> tps;
    for(int i=0; i<n; i++) {
        tps.push_back({R[i], {B[i], L[i]}});
    }
    sort(all(tps)); reverse(all(tps));

    priority_queue<ii> pq;
    int p = 0;
    for(int i=ps.size()-1; i>=0; i--) {
        while(p < (int)tps.size() and tps[p].first == i) {
            pq.push({tps[p].second.first, p}); p++;
        }

        while(!pq.empty() and tps[pq.top().second].second.second > i) pq.pop();
        if(!pq.empty()) {
            int v = pq.top().first;
            ans[i] = max(ans[i], ans[v]);
        }
    }

    for(int i=0; i<q; i++) {
        cout<<ps[ans[Q[i]]]<<" ";
    }
    cout<<"\n";
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
