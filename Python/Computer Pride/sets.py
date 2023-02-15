# sets
# is an unordered collection of uniques elements
# the first one is by using the set() function

list1 = [1, 2, 3, 4, 5, 2, 3]
# print(set(list1))

set1 = set([11, 12, 13, 14, 15, 15, 15, 11])
# print(set1, type(set1))

# the second way to create a set is to use curly braces
set2 = {11, 12, 13, 14, 15, 15, 15, 11}
# print(set2, type(set2))

# we can also find out the number of elements in a set, using the len(), as we did with strings and lists
# print(len(set2))

# check for membership -> the "in" amd "not in" keywords
# print(11 in set2)
# print(16 not in set2)

# adding an element to a set -> add()
set2.add(16)
set2.add(100)
set2.add(20)
set2.add(2)
set2.add(40)

# removing an element from the set -> remove()
set2.remove(15)
# print(set2)

# set methods
set1 = {1, 2, 3, 4}
set2 = {3, 5, 8}

# common element(s) -> intersection()
print(set1.intersection(set2))
print(set2.intersection(set1))

# different elements -> difference()
print(set1.difference(set2))
print(set2.difference(set1))

# unify the two sets -> union()
print(set1.union(set2))

# remove a random element in the set -> pop()
set1.pop()
print(set1)

# clear a set -> clear()
set1.clear()
print(set1)

set3 = {1: 2}
print(set3, type(set3))


