shivam=[4,67,23,678,345,4]
for x in shivam:
    print(x)
print(len(shivam))
print(shivam[1:4])
shivam.append('jfhdsakl')
print(shivam)
a=[435,5,46]
shivam.extend(a)#this will add the a as list in shivam
print(shivam)

shivam.insert(2,'hi')#this will insert the value at specific index
print(shivam)
shivam.remove('hi')# this will remove the element (not by index number)
print(shivam)
shivam.pop(4)# this will also remove but this time with the help of index number
print(shivam)
#shivam.clear()# this will remove all the element present in the list
#print(shivam)

print(shivam.index('jfhdsakl'))#this is use for getting index of an element

print(shivam.count(4))#this is used to count number of occurence in list

newlist=[324,4,756,768,3,342,45]
newlist.sort()#this will sort according to the number 
print(newlist)
newlist.reverse()#this will reverse the list
print(newlist)