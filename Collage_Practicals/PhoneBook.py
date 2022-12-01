a=[]
b=[]
def add_c():
    n=str(input("Enter Contact Name  "))
    p=int(input("Enter Contact Number"))
    a.append(n)
    b.append(p)
    print("Contact Added Successfully !")
def del_c():
    for i in range (len(a)):    
        print ("%d\t%s\t%d" %(i+1,a[i],b[i]))
        d=int(input("Which Contact Do You Want delete? "))
        s=int(input("Sure you want to delete?\n1. Yes\n2. No"))
        if s==1:
            a.pop(d-1)
            b.pop(d-1)
        if s==2:
            break
        
def search_c():
    print("Work in progress")
def del_all():
    a.clear()
    b.clear()
    show()
def show():
    for j in range (len(a)):
        if a[]!=0:
            for i in range (len(a)):
                print ("%d\t%s\t%d" %(i+1,a[i],b[i]))
                print ("\n")
    else:
        print("No Contacts To Display!!!")
while(1):
    print ("* * * * *\n MENU \n* * * * *\n1. Add a Contact\n2. Delete a Contact\n3. Search a Contact\n4. Delete All Contacts\n5. View Contacts\n6. Exit\n\n")
    ch=int(input("Enter Your Choice "))
    if ch==1:
        add_c()
    if ch==2:
        del_c()
    if ch==3:
        search_c()
    if ch==4:
        del_all()
    if ch==5:
        show()
    if ch==6:
        break
