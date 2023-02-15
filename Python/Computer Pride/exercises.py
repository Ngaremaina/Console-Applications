# # num1 = 10
# # num2 = 2.5
# # type = "Whole" if type(num1) == int else "Floating-point"

# # # check the type of the variables
# # print(f"{num1} is a '{type}' number")
# # print(f"{num2} is a '{type}' number")

# # fix the last line so that it prints the sum of 1 and 2

# # a = "1"
# # b = 2
# # print(a + b)

# # Expected output is 3


# # Calculate your age in seconds - Application

# # Naming convention in python
# # 1. camel case -> userName
# # 2. pascal case -> UserNameAge
# # 3. snake case -> user_name

# #  


# # Calculate the area and circumference of a circle
# # radius = float(input("Enter the radius of a circle: "))

# # PI = 22 / 7
# # diamater = 2 * radius

# # area = PI * radius * radius
# # circum = PI * diamater

# # print(f"Circle with a radius {radius} has an area and circumference of {area}cm\u00b2 and {circum}cm respectively! :(")

# # write a python program that asks the user for their age and then outputs the decades they have lived (eg if the user is 18 years then they have lived for 1 decade)

# # decades = user_age // 10
# # s = "s" if decades > 1 else ""
# # print(f"Hello {user_name}, You have live for {decades} decade{s}.")


# # Grade calculator
# # Ask the user for the marks
# math = float(input("Enter marks for maths: "))
# eng = float(input("Enter marks for English: "))
# swa = float(input("Enter marks for Kiswahili: "))
# sci = float(input("Enter marks for Science: "))
# sst = float(input("Enter marks for Social Studies: "))
# art = float(input("Enter marks for art: "))
# music = float(input("Enter marks for music: "))
# # new_subj = 

# # create an empty list
# subjects = []

# # store the marks in a list
# # subjects = [math, eng, swa, sci, sst, art, music]
# subjects.append(math)
# subjects.append(eng)
# subjects.append(swa)
# subjects.append(sci)
# subjects.append(sst)
# subjects.append(art)
# subjects.append(music)

# # calculate the total sum of the subjects
# total = sum(subjects)

# print(subjects.count(34))

# # calculate the average
# average = round(total / len(subjects), 0)

# # display the average score of the student
# print(f"Hello, {user_name}, You scored an average of: {average}% from {len(subjects)} subjects.")





# create a function to get the name of the user
def userName():
    name = input("Please enter your name: ")
    return name

# create a function to get the age of the user
def userAge():
    age = int(input("Enter your age too: "))
    return age

# create a function to calculate the age of the user in seconds
def userAgeInSeconds(age):
    age_in_seconds = age * 365 * 24 * 60 * 60
    return age_in_seconds
    
# create a function to display the age of the user in seconds
def printUserAge():
    user_name = userName()
    user_age = userAge()
    user_age_in_seconds = userAgeInSeconds(user_age)
    print(f"Hello, {user_name}! You have lived for {user_age_in_seconds} seconds")
    

# printUserAge()



# Create a function that calculates acceleration given initial velocity v1, final velocity v2, start time t1, and end time t2.
# To test your solution call the function by inputting values 0, 10, 0, 20 for v1, v2, t1 and t2 respectively and you should get the expected output as 0.5

def acceleration(v1, v2, t1, t2):
    acc = (v2 - v1) / (t2 - t1)
    return acc

# print(acceleration(0, 10, 0, 20))

# create a function that takes any string as input and return the number of words for that string.

# def count_words(any_string):
#     string_list = any_string.split(" ")
#     counted_words = len(string_list)
#     return counted_words

# print(count_words("Hello Everyone leo ni ku moto"))

# create a lottery app

# CREATE A PROGRAM THAT GETS TWO NUMBERS FROM THE USER AND THEN CHECKS IF THE SUM OF THE TWO NUMBERS IS EVEN OR ODD (PRINT OUT THE RESULT AS EVEN OR ODD).. IMPROVE THE PROGRAM TO ALSO CHECK IF THE NUMBERS THEMSELVES ARE ODD OR EVEN
# def checkIfNumIsOddOrEven(num):
#     status = ""
#     if num % 2 == 0:
#         status = f"{num}(even)"
#     elif num % 2 == 1:
#         status = f"{num}(odd)"
#     else:
#         status = "Please enter a valid number"
#     return status
        
# def checkIfSumIsOddOrEven(sum):
#     status = ""
#     if sum % 2 == 0:
#         status = f"{sum}(even)"
#     else:
#         status = f"{sum}(odd)"
#     return status
 
# def calculateSumOfTwoNumbers():
#     num1 = int(input("Enter the First Number: "))       
#     num2 = int(input("Enter the Second Number: "))       
#     sum = num1 + num2
#     num1_status = checkIfNumIsOddOrEven(num1)
#     num2_status = checkIfNumIsOddOrEven(num2)
#     return sum, num1_status, num2_status

# def printResults():
#     sum = calculateSumOfTwoNumbers()
#     sum_status = checkIfSumIsOddOrEven(23)
#     print(f"The sum of {sum[1]} and {sum[2]} is: {sum_status}")

# printResults()

# import the random module
# import random

# # create a function that creates the lottery numbers
# def createLotteryNumbers():
#     values = set()
#     while len(values) > 6:
#         values.add(random.randint(1, 50))  
#     return values

# # create a function to get the lottery from the user
# def get_player_numbers():
#     # user_integer_numbers = []
#     user_set_integers = set()
#     numbers_csv = input("Enter your six numbers, separated by commas(no spaces): ") # use split()
#     numbers_list = numbers_csv.split(",")
#     # convert the list elements into integers
#     # for number in numbers_list:
#     #     user_integer_numbers.append(int(number))
#     # convert the list into a set
#     for number in numbers_list:
#         user_set_integers.add(int(number))
#     return user_set_integers
    
# # create the menu of our program
# def menu():
#     # ask the user for their numbers
#     user_numbers =  get_player_numbers()
#     # generate the lottery(winning) numbers
#     lottery_numbers = createLotteryNumbers()
#     # print out the winnigs
#     matched_numbers = user_numbers.intersection(lottery_numbers)
#     num =  matched_numbers if matched_numbers else "0"
#     print(f"The winning Numbers were: {lottery_numbers}")
#     print(f"You matched {num} and Won Kes{100 ** len(matched_numbers)}!")
    
# menu()

# Exercise on Complex Data Types
# 1. create a list of "person" dictionaries with a name, age, and a list of hobbies for each person. Fill in any data you want

persons = [
    {
        "name": "raphael",
        "age": 18,
        "hobbies": ["coding", "swimming"]
    },
    {
        "name": "Andrew",
        "age": 19,
        "hobbies": ["cooking", "coding", "playing"]
    },
    {
        "name": "Ngare",
        "age": 24,
        "hobbies": ["drawing", "graphic design", "driving", "swimming"]
    }
]
# print(persons)

# 2. Use a list comprehension to convert this list of persons into a list of names (of the person)
# names_list = []
# for person in persons:
#     names_list.append(person["name"])
# print(names_list)
names = [person["name"] for person in persons]
# print(names)

# 3. Use the list comprehension to check whether all persons are older than 20 years old
# are_older = [x['name'] for x in persons if x['age'] > 20]

# are_older = []
# for people in persons:
#     if people['age'] > 20:
#         are_older.append("True")
#     else:
#         are_older.append("False")
# are_older = all([person['age'] > 20 for person in persons])
are_older = [person['age'] > 20 for person in persons]
    
# print(are_older)

# 4. Copy the list such that you can safely edit the name of the first person (without changing the original list)

# persons[0]['name'] = "Ian"
# copied_persons = [person.copy() for person in persons]
# copied_persons = persons[:]
# copied_persons[2]['name'] = "Ian"
# print(copied_persons)
# print(persons)

# 5. Unpack the persons of the original list into different variables and output these variables

