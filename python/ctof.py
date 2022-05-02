def F(C):
    return (9.0/5)*C+32

a=10
F1=F(a) #F(10)
print('F1:',F1)

temp=F(15.5)
F2=F(a+1)
print('Temp:',temp,'F2:',F2)

sum=F(10)+F(15)
Flist=[F(C) for C in [0,10,20]]
print(Flist,sum)