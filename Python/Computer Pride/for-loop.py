# Python Loops
# For-Loop
vendors = ["Cisco", "HP", "Nortel", "Avaya", "Juniper"]

for each_vendor in vendors:
    print(each_vendor)
    
my_string = "Cisco"

for letter in my_string:
    print(letter)
    print(letter * 2)
    print(letter * 3)
    
my_range = range(0, 10)

for i in my_range:
    print(i * 2)

len(vendors)
range(5)
# print(list(range(5)))

range(len(vendors))

# # lets create a for-loop that prints out each element of the vendors list by its index.
# for each_vendors in vendors:
#     range(5) # -> [0, 1, 2, 3, 4]
#     print(each_vendor[range(5)])
    
    # D -> Don't
    # R -> Repeat
    # Y -> Yourself
    
# for element_index in range(len(vendors)):
#     print(element_index, vendors[element_index])
    
for element_index in range(len(vendors)):
    print(vendors[element_index])

# for each_vendors, vendor in enumerate(vendors):
#     print(f"element at index {each_vendors} is {vendor}")
    
    
# for index, letter in enumerate(my_string):
#     print(index, " -> ", letter)
# vendors[0], vendors[1] and so on until the list is exhausted

# for index, element in enumerate(vendors):
#     print(index, element) 
    

# numbers_list = range(-51, 0)

# for number in numbers_list:
#     if number % 2 == 1:
#         print(number)


numbers_list = range(-51, 0)

odd_numbers = []
even_numbers = []

for number in numbers_list:
    if number % 2 == 1:
        odd_numbers.append(number)
    else:
        even_numbers.append(number)
        
print(odd_numbers)
print(even_numbers)
print("largest_number: ", max(even_numbers))
print("smallest_number: ", min(even_numbers))