#if
#if true or some value
#if false or o or no value
var1=100
if var1>200:
    print('Var1 has some value!')
    
var2='' #false/null/0/''
if var2:
    print('Var2 has some value!')
    
print('Bye.')
     
#if else
var3=200
if var3>100:
    print('Var3 is greater than 100!')
else:
    print('Var3 is lass or equal than 100!')
    
#nested if
var4=100
if var4<200:
    print('Var4 is less than 200!')
    if var4==150:
        print('Var4 is 150!')
    elif var4==100:
        print('Var4 is 100!')
    elif var4==50:
        print('Var4 is 50!')
else:
    print('Var4 is greater than or equal 200!')
    