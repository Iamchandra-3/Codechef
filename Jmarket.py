import sys
for _ in range(int(input())):
    d, a, b, c = map(int,sys.stdin.readline().rstrip("\r\n").split())
    list = [a, b, c]
    ans = min(a, b, c)
    list.remove(ans)
    s = min(list)
    print(ans*(d-1)+s)
