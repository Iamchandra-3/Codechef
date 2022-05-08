my_list=[2,3,8,4,7,9,2,6,5,1,6,1,2,3,4,6,9,1,2]
k=0
n=my_list[0]
for i in my_list:
    cf=my_list.count(i)
    if(cf>k):
        k=cf
        n=i
print(n)