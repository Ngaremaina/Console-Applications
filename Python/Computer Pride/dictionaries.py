# dictionary
# set of key-value pairs comma(s)
# Vendor: Cisco, Model: 2600, IOS: 12.4, Ports: 4
# dictionary-specific procedures

dict1 = {}
# print(dict1, type(dict1))

dict1 = {"Vendor": "Cisco", "Model": "2600", "IOS": "12.4", "Ports": "4"}

# Dictionary Methods
# accessing values of a dictionary
print(dict1["Vendor"])
print(dict1["Model"])
print(dict1["IOS"])
print(dict1["Ports"])

# adding a key-value pair to a dictionary
# RAM: 128
dict1["RAM"] = "128"
print(dict1["RAM"])

# Modifying -> IOS: 15.6
dict1["IOS"] = "15.6"
print(dict1)

# delecting a key-value -> del command
del dict1["Ports"]
print(dict1)

# number of key-value pairs in the dict
print(len(dict1))

# membership 
print("IOS" in dict1)
print("Ports" not in dict1)

# three important methods when working with keys and values 
# 1. keys() -> obtains a list having the keys in a dictionary as elements
print(list(dict1.keys()))

# 2. values() -> used to get a list having the values in a dictionary as elements
print(list(dict1.values()))

# 3. items() -> which returns a list of tuples, each tuple containing the key and value of each dictionary pair.
print(list(dict1.items()))

# Python Conditionals if/elif/else

dict1 = {"Vendor": "Cisco", "Model": "2600", "IOS": [12.3, 14.0, 15.6, 16.1], "Ports": "4"}

# 15.6 -> output
# dict1["IOS"] = 15.6
print(dict1["IOS"][2])

# create a dictionary using python code/knowledge

dict1 = dict(a = list(range(1, 11)), b = list(range(11, 21)), c = list(range(21, 31)))
print(dict1)

dict1 = {}
dict1['a'] = list(range(1, 11))
dict1['b'] = list(range(11, 21))
dict1['c'] = list(range(21, 31))

print(dict1)

dict1 = {'a': list(range(1, 31))}

print(dict1)

# for key, value in dict1.items():
#     print(key, " has value ", value)