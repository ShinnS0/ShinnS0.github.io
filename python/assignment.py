n=int(input("Enter line : "))
for i in range(n):
    for j in range(i,1,1):
        print('*',end=" ")
    print()
    
for i in range(n,1,-1):
    for j in range(1,i):
        print("*",end=" ")
    print()