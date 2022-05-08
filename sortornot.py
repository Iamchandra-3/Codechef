a=[11,12,23,42,51,67]
print("Given list is: \n",a)
Adup=a[:]
Adup.sort()
if(a==Adup):
    print("Yes, list is sorted.")
else:
    print("No, list is not sorted.")