# Write a Python program to get a string made of the first 2 and last 2 characters of a given string. If the string length is less than 2, return the empty string instead

inp=input("Enter a string -> ")
length=len(inp)
if (length<2):
    print("Empty string")
else:
    print(inp[0:2] + inp[-2:])

# def string_both_ends(str):
#   if len(str) < 2:
#     return ''

#   return str[0:2] + str[-2:]

# print(string_both_ends('w3resource'))
# print(string_both_ends('w3'))
# print(string_both_ends('w'))