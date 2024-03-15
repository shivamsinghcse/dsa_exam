a=1
b=0
for x in range(100):
    c=a+b
    a=b
    b=c
    print(c)