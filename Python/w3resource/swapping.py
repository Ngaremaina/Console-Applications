# Write a Python program to get a single string from two given strings, separated by a space and swap the first two characters of each string. 

first = input("Enter your first string -> ")
second = input("Enter your second string -> ")

a = second[:2]+first[2:]
b = first[:2]+second[2:]

print(a + " " + b)
# def chars_mix_up(a, b):
#   new_a = b[:2] + a[2:]
#   new_b = a[:2] + b[2:]

#   return new_a + ' ' + new_b
# print(chars_mix_up('abc', 'xyz'))
