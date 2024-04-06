#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define SZ(x) ((int)(x).size())
typedef vector<int> VI;
typedef basic_string<int> BI;
typedef long long ll;
typedef pair<int,int> PII;
typedef double db;
mt19937 mrand(random_device{}()); 
const ll mod=1000000007;
int rnd(int x) { return mrand() % x;}
ll powmod(ll a,ll b) {ll res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
ll gcd(ll a,ll b) { return b?gcd(b,a%b):a;}
// head

int n;
char s[1111];
int main() {
	scanf("%d",&n);
	int v=1,c=0;
	while (v<n) v*=2,c++;
	printf("%d\n",c);
	fflush(stdout);
	rep(i,0,c) {
		VI v;
		rep(j,0,n) if ((j&(1<<i))) v.pb(j+1);
		printf("%d",SZ(v));
		for (auto x:v) printf(" %d",x); puts("");fflush(stdout);
	}
	scanf("%s",s);
	int id=0;
	rep(i,0,c) id+=(s[i]-'0')<<i;
	printf("%d\n",id+1);
	fflush(stdout);
}
