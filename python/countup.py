#count up for entry value 'Y' ot 'y' and exit if entry is 'N' or 'n'
count=0
entry='Y'
while entry!='N' and entry!='n':
    print(count)
    entry=input("Enter 'Y' to continue or 'N' to exit! ")
    if entry=='Y' or entry=='y':
        count+=1
    elif entry!='N' and entry!='n':
        print(entry , ' is not a valid entry!')