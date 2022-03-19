print("Enter number to sum , negative number to end this!")
entry=0
sum=0
while entry>=0:
    entry=int(input("Enter a number : "))
    if entry>=0:
        sum += entry
print('Sum is : ',sum)