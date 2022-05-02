str3="Berlin: 3.45 C at 4 PM"
mylist=str3.split(':')[1].split()[0]
print(mylist)

mylist1=str3.split()
print(mylist1)

s="this is a string"
print(s[0:6])
print(s[-1])
print(s[:-3])
print(s[5:])

str1=s.replace(s[s.find('a'):],'My Car')
print(str1)

newstring= s.replace('string','table')
print(newstring , s )

mystring=s.split()
result=' '.join(mystring)
print(result)
check='this' in s
print(check)

index=s.find('inz')
print(index)