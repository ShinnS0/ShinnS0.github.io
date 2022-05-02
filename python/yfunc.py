def Yfunc(t,v0):
    return v0*t + 0.5*g*t**2

def Yfunc2(t):
    global v0
    v0=7
    return v0*t + 0.5*g*t**2

g=9.81 #global var
v0=6 #global var

y1=Yfunc(0.1,6)
y2=Yfunc(0.1,v0=6)
y3=Yfunc(t=0.1,v0=6)
y4=Yfunc(v0=6,t=0.1)
y5=Yfunc2(0.1)
print(y1,y2,y3,y4,y5)
print(v0)
