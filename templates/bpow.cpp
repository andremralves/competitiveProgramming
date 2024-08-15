ll bpow(ll a, ll b) {
  return !b?1:bpow(a*a%MOD, b/2)*(b&1?a:1)%MOD;
}
