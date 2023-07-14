#N, S = input(), input()

#print(max(map(len, S.split('-'))) if 'o' in S and '-' in S else -1)

x = "oo--ooo-oooooo-----ooooooo---ooooooooo"

print(max(map(len, x.split('-'))))

