ll sqt(ll N) {
  ll lo = 0, hi = 2000000000;
  while(lo < hi) {
    ll mid = (lo+hi+1)/2;
    if(mid*mid <= N) {
      lo = mid;
    } else {
      hi = mid-1;
    }
  }
  if(lo * lo == N) return lo;
  return -1;
}
