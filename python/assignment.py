# data title amount '1-3-2022' Coffee 1200'

import json
import sys

class Expense:
    def __init__(self,date,title,amount):
        self.date=date
        self.title=title
        self.amount=amount
#ask input
def ask_expense_info():
    date=input('Enter date: ')
    title=input('Enter title: ')
    amount=input('Enter amount: ')
    expense=Expense(date,title,amount)
    add_expense(expense.__dict__)

def add_expense(expense):
    # openFile JSON and read
    infile=open('expenselist.json','r')
    lines=infile.readlines()
    infile.close
    # convert string to json
    myjson=json.loads(lines[0])
    # add expense into expenseList.
    myjson['expenselist'].append(expense)
    # convert studentLisr json to string and write to file
    file=open('expenselist.json','w')
    file.write(json.dumps(myjson)) 
    file.close()

#To show
def show_expense_list():
    file=open('expenselist.json','r')
    lines=file.readlines()
    file.close()
    myjson=json.loads(lines[0])
    for expense in myjson['expenselist']:
        print(' %s \t%s \t%s ' %(expense['date'],expense['title'],expense['amount']))
#Total
def show_total_amount():
    file=open('expenselist.json','r')
    lines=file.readlines()
    file.close()
    myjson=json.loads(lines[0])
    total=0
    for expense in myjson['expenselist']:
        myamount=int(expense['amount'])
        total += myamount
    print ('Total amount: ',total)


def main():
    print('Please choice : ')
    print(' 1: Add New Expense ')
    print(' 2: Show Expense List')
    print(' 3: Show Total Amount')
    print(' 4: Exit from program ')
    ans=int(input('Enter your choice: '))
    if ans==1:
        ask_expense_info()
        show_expense_list()
    elif ans==2:
        show_expense_list()
    elif ans==3:
        show_total_amount()
    else:
        print('Terminating from Program .....!')
        sys.exit(1)
main()