# 1. Write a Python Program that prints the reversed version of a string. The program must preserve uppercase and lowercase letters. If the string is empty, print it intact.

# inp=input("Enter a string no 1 -> ")
# if inp=="":
#     print(inp)
# else:
#     reversing=inp[::-1]
#     print(reversing)

# # 2. Write a Python program that prints the length of a string s.

# inp=input("Enter a string no 2 -> ")
# print(len(inp))
# 3. Write a Python program that prints the character at index i in the string s.If the index is out of range, the program should print "i is out of range". If the string is empty, the program should print "Empty String"
# my_string="0 E2 10.110.8.9 [160/5] VIA 10.119.254.6, 0:01:00 Ethernet2"

# index=int(input("Enter the index no 3 -> "))
# length=len(my_string)
# try:
#     if length <= 0:
#          print("Empty string")
#     else:
#         print(my_string[index])
# except IndexError:
#     print("index out of range")
    
# # 4. Write a Python program that prints the first and last three characters of the string s as a single string.
# # If the string has less than six characters, print an empty string (blank output).
# my_string="0 E2 10.110.8.9 [160/5] VIA 10.119.254.6, 0:01:00 Ethernet2"

# length=len(my_string)
# count = 0

# if length < 6:
#     print("Empty string")

# else:
#     print(my_string[:3] + my_string[-3:])

# # 5. Write a Python program that prints the string s without the characters located at even indices.

# # If the string is empty or only has one character, print it intact.
# my_string=input("Enter a string -> ")
# my_string="0 E2 10.110.8.9 [160/5] VIA 10.119.254.6, 0:01:00 Ethernet2"

# length=len(my_string)
# result=""

# if length <= 1:
#     print(my_string[:])
# else:
#     print(my_string[1::2])

# # 6. Write a Python program that check if a string only contains numbers.

# # If it does, print True. Else, print False.
# my_string=input("Enter a string -> ")
# my_string="0 E2 10.110.8.9 [160/5] VIA 10.119.254.6, 0:01:00 Ethernet2"
# my_string="01"
# if my_string.isdigit() == True:
#     print("True")
# else:
#     print("False")
# Write a Python program that prints the string s without the character at index 
# # If the index n is out of range, print the string s intact.

# # If the string s is empty, print the string s intact.

# my_string="0 E2 10.110.8.9 [160/5] VIA 10.119.254.6, 0:01:00 Ethernet2"
# index=int("Enter the index -> ")
# length = len(my_string)

# try:
#     if length <= 0:
#          print(my_string[:])
#     else:
#         print(my_string[:index] + my_string[index + 1:])
# except IndexError:
#     print("Index out of range")
   
# # 8. Write a Python program that prints the string s with the character curr_char replaced by the character new_char.

# # curr_char and new_char are variables that contain strings with a single character.

# # You may assume that new_char will not be an empty string.

# # The match must be case-sensitive (do not replace lowercase letters if curr_char is uppercase).

# # If no match is found, print the initial string
# my_string = input("Enter a string -> ")
# my_string="0 E2 10.110.8.9 [160/5] VIA 10.119.254.6, 0:01:00 Ethernet2"

# character = input("Enter a character to replace -> ")
# new_character = input("Enter the new character -> ")

# if my_string.find(character) is character:
#     print(my_string[:])
# else:
#     print(my_string.replace(character, new_character))
    
# #LISTS
# # 1. Write a Python program that multiplies all the items in a list by the value of the variable factor.

# # The program must print the list as the output.

# # The program should also allow multiplying the variable factor by a string in case the list contains strings.


# my_list=["a","b","c",'wow','@', 'xyz']

# result=my_list*3

# print(result)
# # You may assume that the value of factor will be a positive integer.

# # 2. Write a Python program that prints the elements of a list on the same line.

# # The elements should be separated only by a space (not by a comma).

# # The output should not include the opening and closing square brackets [ ].

# my_list=["a","b","c",'wow','@', 'xyz']

# for i in my_list:
#     print(i," ", end="")

# print(my_list[:], " ")

# # 3. Write a Python program that prints the largest and smallest values in a list

# # Print the two values on the same line, separated by a space.

# # The largest value should appear first and the smallest value should appear second.

# # You may assume that the list only contains numeric values.

# # If the list is empty, print None.

# my_list=["a","b","c",'wow','@', 'xyz']

# length=len(my_list)

# if length <= 0:
#     print("None")

# else:
#     print(f"The maximum value is {max(my_list)} and the minimum value is {min(my_list)}")

# # 4. Write a Python program that checks if a list is empty or not.

# # If the list is empty, print "Empty". Else, print "Not Empty".
# my_list=["a","b","c",'wow','@', 'xyz']

# length=len(my_list)

# if length <=0:
#     print("Empty")

# else:
#     print("Not Empty")

# # 5. Write a Python program that prints the elements of a list followed their corresponding indices.

# # Each element and its index must be on the same line separated by a space.

# # If the list is empty, print "Empty List".

# my_list=["a","b","c",'wow','@', 'xyz']

# i = 0
# index = 0

# for i in my_list:
#     index = index + 1
#     print(f"{i} {index}\t")