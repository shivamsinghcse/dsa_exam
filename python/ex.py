a=int(input('Enter the value of a'))
b=int(input('Enter the value of b'))
c=int(input('Enter the value of c'))

if a>b and b>c:
    print("A is largeest in this")
if b>a and a>c:
    print("B is largeest in this")
if c>b and c>a:
    print("C is largeest in this")
if a==b and b==c:
    print('All three are equal')