int MAXN = 100005;
int BIT[MAXN], N;
void update(int i, int v) {
  for(++i;i<=N;i+=i&-i) {
    BIT[i] += v;
  }
}
int query(int i) {
  int res = 0; i++;
  for(++i; i>=1; i-=i&-i) {
    res += BIT[i];
  }
  return res;
}

