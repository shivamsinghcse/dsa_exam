#list data type 
myList=[32,43,4,33,34122,3]
print(myList)
myList=[78783,343,'shifs']
print(myList)
myList[2]='43'#we cannot put some number who is out of range
print(myList)


#dictionary data type

myDic={
    'name':'shivam singh',
    'class': 'btech',
    'age': 21
}
print(myDic)
myDic['name']='ansh'
myDic['height'] = 180
myDic.update({'age': 19,'school':'fpass'})
print(myDic)

# int and float data types 
z = 78
y=54378.5453345
print(type(z))
print(type(y))