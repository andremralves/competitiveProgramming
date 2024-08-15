template<class T> struct BIT {
  int N; vector<T> data;
  void init(int _N) { N = _N; data.resize(N); }
  void update(int i, T x) { for (++i;i<=N;i+=i&-i) data[i-1] += x; }
  T query(int i) { T s = 0; for (++i;i;i-=i&-i) s+=data[i-1]; return s; }
  T update(int l, int r, T x) { update(l, x); update(r+1, -x); } // range update
  int lower_bound(T sum) {
    if(sum <= 0) return -1;
    int pos = 0;
    for(int pw= 1<<25; pw; pw>>=1) {
      int npos = pos+pw;
      if(npos <= N && data[npos-1] < sum)
        pos = npos, sum -= data[pos-1];
    }
    return pos;
  }
};
