# list, set, dictionary comprehension
# 1. list comprehension
all_numbers = [12, -4, 57, 34, 89, 65, -21, 0, 67, 90]

# 
# for even_number in all_numbers:
#     if even_number % 2 == 0:
#         print(even_number)
        
# even = []
# for even_number in all_numbers:
#     if even_number % 2 == 0:
#         even.append(even_number)
# print(even)

# create an empty list
# even_numbers = []

# # loop over the numbers list, extract all even numbers and append them into the empty list
# for number in all_numbers:
#     if number % 2 == 0:
#         even_numbers.append(number)

# # display the list
# print(even_numbers)

# list comprehension
even_numbers = [number for number in all_numbers if number % 2 == 0]
print(all_numbers)
print(even_numbers)

temp_data = {12.3, 23, 37.7, 40, 12, 18, 21}

# create an empty set
high_temp = {temp for temp in temp_data if temp > 25}
print(high_temp)
