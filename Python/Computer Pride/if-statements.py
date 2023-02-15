# if/elif/else -> conditional statements
# Indentation ->

# Now, x = 10
#  if - statement
# x = 10

# if x > 15:
#     print(f"{x} is greater than 5")
#     print(x * 2)
# print(x * 3)

# write a program that checks the temperature provided by the user: if the temperature exceeds 32, then display "Cover Tomatoes", otherwise "Uncover Tomatoes"
# temp = int(input("Please enter temperature: "))

# if temp > 32:
#     print("Cover Tomatoes")
# print("Uncover Tomatoes")

# if - else statements
# "x is greater than 5" if "x" is indeed greater than 5, and "x is NOT greater than 5" in any other case.

# x = 4

# if x > 5:
#     print(f"{x} is greater than 5")
# else:
#     print(f"{x} is Less than 5")

# elif

# x = 5

# if x > 5:
#     print(f"{x} is greater than 5")
# elif x == 5:
#     print(f"{x} is equal to 5")
# else:
#     print(f"{x} is less than 5")
    
# database
# user_name = "dennis"
# user_password = "secret"

# # we're getting the users' credentials to login them in
# print("\t\t\t\tLogin System")
# user_n = input("Enter Your User name: ")
# user_p = input("Enter Your Password: ")

# # check if the password and username matches our database records
# if user_n == user_name and user_p == user_password and len(user_p) == 6:
#         print("You are Logged in!")
# else:
#     print("Incorrect username or password")

# write a python program that check if a number is even or odd. if its even print the number is even if its odd print the number is odd otherwise print invalid number.

# modulus %
number = int(input("Enter a number to check if its Even or odd: "))
if number % 2 == 0:
    print(f"{number} is even")
elif number % 2 == 1:
    print(f"{number} is odd")
    
    


    