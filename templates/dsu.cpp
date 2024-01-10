struct DSU {
  vector<int> e;
  DSU(int N) {
    e = vector<int>(N, -1);
  }
  int get(int i) {
    return (e[i]<0?i:e[i] = get(e[i]);
  }
  bool unite(int i, int j) {
    i = get(i); j = get(j);
    if(i == j) return false;
    if(e[j] < e[i])
      swap(i, j);
    e[i] += e[j];
    e[j] = i;
    return true;
  }
}
