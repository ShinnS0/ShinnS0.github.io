def multiple():
    operation="SUM"
    total= 10 + 20
    return operation,total

result = multiple()
print(type(result))
print(result)
operation,total=multiple()
print(operation,total)

def multiple2():
    value=dict()
    value["Operation"]="SUM"
    value["Total"]=10 + 20
    return value

result = multiple2()
print(type(result))
print(result)

