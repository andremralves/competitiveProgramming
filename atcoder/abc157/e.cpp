#include <bits/stdc++.h>

#define all(x) x.begin(),x.end()

// less is more
using namespace std;
using ll = long long;

/**
 * Description: 1D point update and range query where \texttt{cmb} is
 	* any associative operation. \texttt{seg[1]==query(0,N-1)}.
 * Time: O(\log N)
 * Source: 
	* http://codeforces.com/blog/entry/18051
	* KACTL
 * Verification: SPOJ Fenwick
 */

template<class T> struct SegTree { // cmb(ID,b) = b
	const T ID{}; T cmb(T a, T b) { 
    array<bool, 26> arr={};
    for(int i=0; i<26; i++) {
      arr[i] = a[i] | b[i];
    }
    //for(auto x:arr) cout<<x<<" ";
    //cout<<"\n";
    return arr; 
  } 
	int n; vector<T> seg;
	void init(int _n) { // upd, query also work if n = _n
		for (n = 1; n < _n; ) n *= 2; 
		seg.assign(2*n,ID); }
	void pull(int p) { seg[p] = cmb(seg[2*p],seg[2*p+1]); }
	void upd(int p, T val) { // set val at position p
		seg[p += n] = val; for (p /= 2; p; p /= 2) pull(p); }
	T query(int l, int r) {	// zero-indexed, inclusive
		T ra = ID, rb = ID;
		for (l += n, r += n+1; l < r; l /= 2, r /= 2) {
			if (l&1) ra = cmb(ra,seg[l++]);
			if (r&1) rb = cmb(seg[--r],rb);
		}
		return cmb(ra,rb);
	}
	/// int first_at_least(int lo, int val, int ind, int l, int r) { // if seg stores max across range
	/// 	if (r < lo || val > seg[ind]) return -1;
	/// 	if (l == r) return l;
	/// 	int m = (l+r)/2;
	/// 	int res = first_at_least(lo,val,2*ind,l,m); if (res != -1) return res;
	/// 	return first_at_least(lo,val,2*ind+1,m+1,r);
	/// }
};


void solve() {
  int N; cin>>N;
  string s; cin>>s;
  int Q; cin>>Q;
  SegTree<array<bool, 26>> seg;
  seg.init(N);
  for(int i=0; i<N; i++) {
    array<bool, 26> arr={};
    arr[s[i]-'a'] = 1;
    seg.upd(i, arr);
  }
  while(Q--) {
    int q; cin>>q;
    if(q == 1) {
      int i;
      char c;
      cin>>i>>c;
      i--;
      array<bool, 26> arr{};
      arr[c-'a'] = 1;
      seg.upd(i, arr);
    } else {
      int l, r;
      cin>>l>>r;
      l--, r--;
      array<bool, 26> arr = seg.query(l, r);
      cout<<count(arr.begin(), arr.end(), 1)<<"\n";
    }
  }
}

int main () {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 1;
  while (t--) solve();
  return 0;
}
