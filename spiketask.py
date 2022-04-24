import math  # interact with operating system
from sys import stdin  # fast input,output ,maxsize etc
# stdin.readline(),list(map(int,stdin.readline().split()))
for _ in range(int(stdin.readline())):
    n = int(stdin.readline())
    s = stdin.readline()
    a, b = "", ""
    c, d = 0, 0
    for i in range(n):
        if i % 2 == 0:
            a = a+'1'
            b = b+'0'
        else:
            a = a + '0'
            b = b + '1'
    for j in range(n):
        if a[j] != s[j]:
            c = c+1
        if b[j] != s[j]:
            d = d+1
    ans = min(c, d)
    print(ans if ans % 2 == 0 else math.ceil(ans/2))
