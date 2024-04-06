import itertools

def best(e):
    i = 1
    acc = 0
    mx = 0
    for x in e: 
        acc += x*i
        mx = max(mx, x*i)
        i+=1
    return acc-mx
        

for n in range(1, 15):
    better = max(list(itertools.permutations(range(1, n+1))), key=best)
    print(better, best(better))
