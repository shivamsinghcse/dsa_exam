name = str((input('Enter the month name:')).capitalize())
print(name)
if name == 'february':
    print('Numbers of days in',name,'is 28')
elif name in ['January', 'March', 'May', 'July', 'August', 'October', 'December']:
    print('Numbers of days in',name,'is 31')
else:
    print('Numbers of days in',name,'is 30')

    