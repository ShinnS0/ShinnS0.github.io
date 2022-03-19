for letter in "Hello world!":
    print(letter,end='-')
    
fruits=['Banana','Orange','Mango']
for fruits in fruits:
    print(fruits)
    
for i in range(5,10): # 0 to n-1
    print(i)
    
for i in range(len(fruits)): # range(3) => 012
    print(fruits[i])