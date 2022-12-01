def search(key,a,n):
    for i in range(0,n):
        if (a[i]==key):
            return i
    return -1
key=int(input("which value"))
a=[12,65,84,10,23]
n=len(a)
res=search(key,a,n)
if (res==-1):
    print("nahi bhetla ")
else:
    print("bhetla ithe ",res+1)