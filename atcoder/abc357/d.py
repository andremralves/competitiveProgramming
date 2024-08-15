S = input()
N = int(S)

MOD = 998244353
q = pow(10, len(S))

print((N*(1-pow(q, N, MOD))%MOD)*(pow(1-q, MOD-2, MOD))%MOD)
