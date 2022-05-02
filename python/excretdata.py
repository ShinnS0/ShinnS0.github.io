def extractData(filename):
    infile=open(filename,'r')
    infile.readline()
    infile.readline()
    months=[]
    rainfall=[]
    
    for line in infile:
        # print(line)
        word=line.split()
        months.append(word[0])
        rainfall.append(float(word[1]))

    months=months[:-1]
    annual=rainfall[-1]
    rainfall=rainfall[:-1]
    return months,rainfall,annual
    
    # print(months)
    # print(rainfall)
        
months,rainfall,annual = extractData('rainfall.dat')
sum=0
for months,value in zip(months,rainfall):
    sum=+value
    print(months,value)
    
average=sum/len(rainfall)
print('Average rainfall:',average)
print('Annual rainfall:',annual)    