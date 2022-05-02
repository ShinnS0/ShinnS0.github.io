#1 Ask student info
#2 Save in file.
#3 Show student list
#4 Delete student info from list
# CRUD => Creat > Read > Update > Delete
# Roll-Num,Name,Address,Email,Phone

import json
import sys

class Student:
    def __init__(self,rollNo,name,address,email,phone):
        self.rollNo=rollNo
        self.name=name
        self.address=address
        self.email=email
        self.phone=phone
        
#1  
def ask_student_info():
    rollNo=input('Enter Roll No:')
    name=input('Enter name:')
    address=input('Enter address:')
    email=input('Enter Email:')
    phone=input('Enter phone:')
    student=Student(rollNo,name,address,email,phone)
    add_student(student.__dict__)
    
#2  
def add_student(student):
    #openFile JSON and read
    infile=open('studentList.json','r')
    lines=infile.readlines()
    infile.close()
    
    #convert string to json
    myjson=json.loads(lines[0])
    # print(myjson['studentList'])
    
    #add 1 student into studentList list.
    myjson['studentList'].append(student)  # <= add one student into studentList!
    
    #convert studentLisr json to string and write to file
    file=open('studentList.json','w')
    file.write(json.dumps(myjson))
    file.close()
    
#3
def show_student_List():
    file=open('studentList.json','r')
    lines=file.readlines()
    file.close()
    myjson=json.loads(lines[0])
    print('Roll No\tName\t\tAddress \tEmail\t\tPhone')
    for student in myjson['studentList']:
        print('%s\t%s\t%s\t%s\t%s\t' %(student['rollNo'],student['name'],student['address'],student['email'],student['phone']))

#4
def delete_student(rollNo):
    file=open('studentList.json','r')
    lines=file.readlines()
    file.close()
    myjson=json.loads(lines[0])
    index=0
    found=False
    for student in myjson['studentList']:
        if(student['rollNo']==rollNo):
           found=True
           break
        else:
            index+=1
            
    if(found):
        del myjson['studentList'][index]  #delete one student base on index and found status
        file=open('studentList.json','w')
        file.write(json.dumps(myjson)) #json dict to string // update delete studentList
        file.close()
        print('One student deleted')
    else:
        print('Roll No not found!')
            
def main():
    print('Please choose!')
    print('1 to add new student!')
    print('2 to show student List!')
    print('3 to delete a student!')
    print('4 to exit the prigram!')
    ans=int(input('Enter your choice:'))
    if ans==1:
        ask_student_info()
        show_student_List()
    elif ans==2:
        show_student_List()
    elif ans==3:
        rollNo=input('Enter roll no:')
        delete_student(rollNo)
        show_student_List()
    else:
        print('Program Terminating!')
        sys.exit(1)

main()
