# list1 = []
# print(type(list1), list1, len(list1))

list1 = ["Cisco", "Juniper", "Avaya", 10, 10.5, -11]

# Lets fint the number of elements in our list
print(len(list1))
print(list1)

# indexing 
# print out "cisco"
print(list1[0])

# print -11
print(list1[-1])

# print 10.5
print(list1[-2])
print(list1[4])

# IndexError -> list index is out of range
# print(list1[100])

# check mutability of our list by changing the element "Avaya" to "Hp"
print(list1)
list1[2] = "Hp"
print(list1)


# list methods
# min() -> minimum value in a list
list2 = [-11, 2, 12]
print(min(list2))

# max() -> maximum value in a list
print(max(list2))

list3 = ["a", "b", "c", "your", 'you', '@'] # -> ASCII
print(max(list3))

# using strings and integers with max and min
# list3 = ["a", "b", "c", 1, 2, 3]
print(max(list3))

# Appending an element to a list -> append()
list1.append(100)
list1.append(50)
list1.append("python")
print(list1)

# removing an element from the list
# we have three options
# 1. del command
del list1[4]
print(list1)

del list1[-1]
print(list1)

# 2. using pop() -> removing an element using its index
list1.pop(0)
print(list1)

# 3. using remove() -> removes the element specified in between the parenthesis
list1.remove("Juniper")
print(list1)

# appending a list to another list -> extend()
list2 = [9, 99, 999]

list1.extend(list2)
print(list1)


# find out the index of an element in a list -> index() method
print(list1.index(-11))

# count the occurrences of an element in a list -> count() method
list1.append(10)
list1.append(10)
list1.append(10)
list1.append(50)
list1.append(-11)

print(list1.count(50))
print(list1.count("Hp"))

# sorting a list in ascending order -> sort() method
list2.append(1)
list2.append(25)
list2.append(500)
# list2.sort()
print(list2)

# sorting a list in descending order -> reverse() method
# list2.reverse()
print(list2)

# sorted() -> creates a new list in memory
print(sorted(list2))
print(sorted(list2, reverse=True))

# concatenate or repeat
print(list1 + list2)

print(list2 * 3)

# list Slices
list3 = [1, 2, 3, 'a', 'b', 'c']

# what if we want to extract the first three elements of list3? 0, 1, and 2
# so the slice would start at index 0 and go up to but not including index 3
print(list3[0:3])
print(list3[-6:-3])
print(list3[:3])
print(list3[0:-3])

# output -> [3, 'a', 'b']
print(list3[2:5])
print(list3[-4:-1])
print(list3[2:-1])

# ['a', 'b', 'c'] -> -ve indexing
print(list3[-3:])
print(list3[-3:0])
print(list3[-3:-1])
print(list3[-3:0])

# get the entire list
# print(list3[-6:])
print(list3[0:])
print(list3[:])
# print(list3[::])
# print(list3[:6])
# print(list3[:6])
# print(list3[-7:])

# [1, 2, 3]
print(list3[-6:-3])
print(list3[:-3])
print(list3[0:-3])
print(list3[-0:-3])
print(list3[-7:-3])

# [1, 3, 'b']
print(list3[::2])

# ['c', 'b', 'a', 3, 2, 1]
print(list3[::-1])

# create a list of numbers 0-12 -> [0, 2, 4, 6, 8, 10, 12]
list4 = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12]
print(list4[::2])
# create a list of alphabet letters -> ['b', 'd', 'f', 'h', 'j', 'l']


letters = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 
'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
print(letters[1:12:2])