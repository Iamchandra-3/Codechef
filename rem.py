a=[1,2,3,4,5,6,7,8]
b=[3,5,7]
print("Removing All elements from list 'b' present in 'a': ")
r=list(filter(lambda x: x not in b,a))
print(r)