# Tuples

my_tuple = ()
# print(my_tuple, type(my_tuple))

# tuple1 = (9) # -> this is an integer
tuple2 = (9,) # this is a tuple

# print(type(tuple1) == type(tuple2))

my_tuple = (1, 2, 3, 4, 5)
# indexes
# print(my_tuple[6])
# print(my_tuple[5])

print(my_tuple[-2])
print(my_tuple[-1])
print(my_tuple[-0])

# since tuples are immutable, you cannot add or modify a tuple.

# my_tuple[1] = 10

# del my_tuple[1]

# print(my_tuple)

# Tuple assignment
# tuple1 = ("Cisco", "2600", "12.4")

# (vendor, model, ios) = tuple1

# print(vendor)
# print(model)
# print(ios)

tuple2 = (1, 2, 3, 4)
# (x, y, z) = tuple2
# print(z)

# Tuple Methods
# lenght of tuple
# print(len(tuple1))

# # min and max -> lowest and greatest value
# print(min(tuple1))
# print(max(tuple1))

# concatenate
print(tuple2 + (5, 6, 7))

# multiplication
print(tuple2 * 3)

# slicing -> (1, 2)
print(tuple2[0:2])
print(tuple2[:2])
print(tuple2[0:-2])

# (2, 3, 4)
print(tuple2[1:])
print(tuple2[-3:])
print(tuple2[1:4])
# print(tuple2[1:3])

# (4, 3, 2, 1)
print(tuple2[::-1])

# (1, 3)
# syntax -> variable_name[start : stop : step]
print(tuple2[0:2])
print(tuple2[::2])
print(tuple2[0:3])
print(tuple2[:])

# membership -> 'in' and 'not in'
print( 2 in tuple2)
print( 20 not in tuple2)

# delete a tuple -> del command
# del tuple2
# print(tuple2)

# print(x)
