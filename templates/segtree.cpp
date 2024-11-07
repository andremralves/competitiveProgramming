ll SZ = 262144*2; //set this to power of two
mi* seg = new mi[2*SZ]; //segtree implementation by bqi343's Github
 
mi combine(mi a, mi b) {  
    if (a.v == 0) return b;
    return a;
}
 
 
void update(int p, mi value) {  
    for (seg[p += SZ] += value; p > 1; p >>= 1)
        seg[p>>1] = combine(seg[(p|1)^1], seg[p|1]);
}
 
mi query(int l, int r) {  // sum on interval [l, r]
    mi resL = 0, resR = 0; r++;
    for (l += SZ, r += SZ; l < r; l >>= 1, r >>= 1) {
        if (l&1) resL = combine(resL,seg[l++]);
        if (r&1) resR = combine(seg[--r],resR);
    }
    return combine(resL,resR);
}
