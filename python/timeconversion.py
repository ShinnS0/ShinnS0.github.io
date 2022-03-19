#second to hr:min:sec
#sec 60 =1 min
#min 60 =1 hr =2600sec
#sec=> hr:min:sec
#1 : divide sec with 3600 using // operator get hr
#2 : divide sec with 3600 using % operator get sec to calculate min
#3 : divide remaining sec in step2 with 60 using // operator to get min
#4 : divide remaining sec in step2 with 60 using % operator to get sec
# 4000 => 3600 => // => %

seconds = int(input('Enter seconds to calculate hr:min:sec: '))
hr= seconds//3600
seconds= seconds%3600
min= seconds//60
sec= seconds%60
print(hr,'hour :',min,'minutes :',sec,'Seconds')