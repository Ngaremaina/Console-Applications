# Ranges
r = range(10)
print(type(r))

# list method / constructor
r = list(range(10))
print(r)

# [0, 2, 6, 4, 8]
r = list(range(10)[::2])
print(r)

# [-12, -10, -8, -6, -4, -2]
print(list(range(-12, -1)[::2]))
r = list(range(-12, 0))
print(r[::2])
r2 = range(-12, 0, 2)
print(list(r2))
