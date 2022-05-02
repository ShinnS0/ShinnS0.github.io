class Account:
    def __init__(self,name,account_number,initial_amount):
        self.name=name
        self.no=account_number
        self.balance=initial_amount
    def deposite(self,amount):
        self.balance += amount
    def withdrawl(self,amount):
        self.balance -= amount
    def dump(self):
        print('%s , %s balance : %s '%(self.name,self.no,self.balance))
        
        
a1=Account('Ma Ma','0123456',20000)
print(a1.__dict__)
a1.dump()
a1.deposite(50000)
a1.dump()
a1.withdrawl(60000)
a1.dump()