# files
# open() -> used for openning files in python
#        -> it takes two parameters which are "file_name" and the "mode"
# we have severals modes for openning a file with:
# 1. read -> 'r': reading a file - returns an error if the file does not exist
# 2. write -> 'w': writing to a file - creates the file if its does not exist - it overwrites the existing data
# 3. append -> 'a': appending to a file, creates the file if it does not exist
# 4. delete -> 'x': deletes a file




# write to a file - write mode and append mode
# file = open("people.txt", "a")
# file_contents = file.write("Python Programming\n")
# file.close()

# write to file using 'w'
# file = open("my_file.txt", 'w')
# user_name = "Raphael Oyoo"
# file.write(user_name)
# file.close()

# read mode -> 'r'reading a file
# file = open("people.txt", "r")
# file_contents = file.read()
# file.close()
# print(file_contents)

# openning files using context managers
# with open("people.txt", 'r', 'a') as file:
#     file_contents = file.read()
#     # print(file_contents)
    
# with open("people.txt", 'a') as f:
#     new_person = "Person New"
#     f.write(new_person + "\n")
  
# # deleteing a file  
# import os
# os.remove("new_file_2.txt")

# import datetime

# # print(datetime.date.today())
# own_date = datetime.datetime.now()
# # print(own_date.strftime("%B"))
# print(own_date)

# 1. write a short python script which queries the user for input (infinite loop with exit possibility) and writes the input to file.
# while True:
#     input_query = "What would you like to write? "
#     file_input = input(input_query)
#     with open("my_file.txt", "a") as file:
#         user_input = file_input
#         fill_content = file.write(user_input + "\n")
#     with open("my_file.txt", "r") as file:
#         fill_contents = file.read()
#         print(fill_contents)
#     back = input("Do you wish to give another? Y/N: ")
#     if back.lower() == "y":
#         continue
#     else:
#         break

# running = True
# while running:
#     print("Please Choose from the Menu")
#     print("1. Add Input")
#     print("q. Quit")
#     user_choice = input("Your Choice: ")
#     if user_choice == "1":
#         data_to_store = input("Please provide your input: ")
#         with open("sample.txt", "a") as f:
#             f.write(data_to_store)
#             f.write("\n")
#     elif user_choice == "q":
#         running = False

# 2. Add another option to your user interface (UI): The user should be able to output the data stored in the file in the terminal

# running = True
# while running:
#     print("Please Choose from the Menu")
#     print("1. Add Input")
#     print("2. Output Data")
#     print("q. Quit")
#     user_choice = input("Your Choice: ")
#     if user_choice == "1":
#         data_to_store = input("Please provide your input: ")
#         with open("sample.txt", "a") as f:
#             f.write(data_to_store)
#             f.write("\n")
#     elif user_choice == "2":
#         with open("sample.txt", "r") as f:
#             for line in f.readlines():
#                 print(line)
#     elif user_choice == "q":
#         running = False

# 3. store the user input in a list (instead of directly adding it to the file) and write that list to the file - using pickle and json
import pickle, json

user_input_list = []
running = True
while running:
    print("Please Choose from the Menu")
    print("1. Add Input")
    print("2. Output Data")
    print("q. Quit")
    user_choice = input("Your Choice: ")
    if user_choice == "1":
        data_to_store = input("Please provide your input: ")
        user_input_list.append(data_to_store)
        with open("sample.txt", "w") as f:
            f.write(json.dumps(user_input_list))
    elif user_choice == "2":
        with open("sample.txt", "r") as f:
            file_contents = json.loads(f.read())
            for line in file_contents:
                print(line)
            
    elif user_choice == "q":
        running = False


# 4.adjust the logic to load the file content to work with pickled/jsoned file