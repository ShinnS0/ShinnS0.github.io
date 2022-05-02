
infile=open('Oxford.dat','r')
lines=infile.readline().split('\\r\\n')
# print(lines)
# print(lines[0])
# print(lines[1])
place=lines[0]
location=lines[1]
temp_info=lines[7:]
data={}
#data={1853:{1:{tmax:8,4,tmin:}}}
data['place']=place
data['location']=location
data['data']={}
# print(data)
print(len(temp_info))
for temp in temp_info:
    columns=temp.split()
    year=columns[0]
    month=columns[1]
    if columns[-1]=='Provisional':
        del columns[-1]
    for i in range(2,len(columns)):
        if columns[i][-1]=='*': #if end with *
           columns[i]=columns[i][:-1] #remove last element
        elif columns[i]=='---': #if value is '---'
            columns[i]='None'
    tmax,tmin,air_frost,rain,sun=columns[2:]
    if not year in data['data']:
        data['data'][year]={}
    data['data'][year][month]={'tmax':tmax,'tmin':tmin,'air_frost':air_frost,'rain':rain,'sun':sun}
print(data['data']['2020    '])