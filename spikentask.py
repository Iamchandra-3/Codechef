for _ in range(int(input())):
    n=int(input())
    s = input()
    c=0
    #input done
    for i in range(n):
        if((s[i] == 0 and s[i+1] == 0)or (s[i] == 1 and s[i+1] == 1)):
            s[i+1],s[0]=s[0],s[i+1]
            c=c+1
    print(c)
