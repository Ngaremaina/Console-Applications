# list1 = []

# print(type(list1), list1, len(list1))

list1=["Cisco", "Juniper", "Avaya", 10, 10.5, -11]

#Lets find the number of elements in our list

print(len(list1))
print(list1)

#indexing
#print out cisco
print(list1[0])

#print -11
print(list1[-1])

#print -10.5
print(list1[-2])

#check mutability of our list by changing the element "Avaya" to "HP"
print(list1)
list1[2]="Hp"
print(list1)

#list methods
# min() -> minimum value in a list

list2=[-11, 2, 12]
print(min(list2))

# max() -> maximum value in a list
print(max(list2))

list3=["a","b","c",'wow','@', 'xyz']
list3=["a","b","c","1","2","3"]
print(max(list3))

#append an element to a list
list1.append(100)
list1.append(50)
list1.append("python")
print(list1)

#removing an element from the list
# 1. del command
del list1[4]
print(list1)
#deleting the last index in the list
del list1[-1]
print(list1)

#2. using pop()
list1.pop(0)
print(list1)

#3. using remove()
list1.remove(100)
print(list1)

#appending a list to another list
list2 = [9,99,999]

list1.extend(list2)
print(list1)

#find out the index of an element in a list -> index() method
print(list1.index(-11))

#count the occurrences of the elements in a list ->  count() method
list1.append(10)
list1.append(10)
list1.append(10)
list1.append(50)
list1.append(-11)

print(list1.count(10))
print(list1.count("Hp"))

#sorting a list in ascending order -> sort() method
list2.append(1)
list2.append(25)
list2.append(500)

list2.sort()
print(list2)

#sorting a list in descending order -> reverse() method
list2.reverse()
print(list2)

#sorted() -> creates a new list in memory
print(sorted(list2))
# print(list2)

print(sorted(list2, reverse=True))
# print(list2)

#concatenate or repeat
print(list1 + list2)
print(list2 * 3)

#list slicing

#sets