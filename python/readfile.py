infile=open('data.txt','r')
sum=0.0
count=0

for line in infile:
    count+=1
    sum=float(line)
    
mean=sum/count
print('Total:',sum,' Mean:',mean)
    
infile.close()