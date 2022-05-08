a=[]
b=[]
print("Enter size of list 1 : ")
n = int(input())
print("Enter list 1 elements: ")
for i in range(int(n)):
    k=int(input(""))
    a.append(k)
print("Enter size of list 2 : ")
m = int(input())
print("Enter list 2 elements: ")
for i in range(int(m)):
    k=int(input())
    b.append(k)
c=list(set(a)-set(b))
print(c)
