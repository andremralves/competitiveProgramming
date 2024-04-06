N = int(input())

ans = 0
for x in range(1, N+1):
    if str(oct(x)).find("7") == -1 and str(x).find("7") == -1:
        ans+=1
print(ans)
