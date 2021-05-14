x1=int(input())
v1=int(input())
x2=int(input())
v2=int(input())
if (v1==v2):
    print("NO")
elif((x2 - x1) / (v1 - v2) > 0 and (x2 - x1) % (v1 - v2) == 0):
    print("YES")
else:
    print("NO")
