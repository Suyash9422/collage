# CREATING A FIBONACCI SERIES


n=int(input("Enter the number "))
a=[0,1]
for i in range (2,n-2):
    a.append(a[i-1]+a[i-2])
print (a)


# FIBONACCI SEARCH ALGORITHM