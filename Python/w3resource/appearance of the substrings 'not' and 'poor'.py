# Write a Python program to find the first appearance of the substrings 'not' and 'poor' in a given string. If 'not' follows 'poor', replace the whole 'not'...'poor' substring with 'good'. Return the resulting string.


inp=input("Enter a string -> ")


xpoor=inp.find("poor")
ynot=inp.find("not")

if xpoor>0 and ynot>0 and xpoor>ynot:
    good=inp.replace(inp[ynot:(xpoor+4)],"good")
    print(good)

# def not_poor(str1):
#   snot = str1.find('not')
#   spoor = str1.find('poor')
  

#   if spoor > snot and snot>0 and spoor>0:
#     str1 = str1.replace(str1[snot:(spoor+4)], 'good')
#     return str1
#   else:
#     return str1
# print(not_poor('The lyrics is not that poor!'))
# print(not_poor('The lyrics is poor!'))
