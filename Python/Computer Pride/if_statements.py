# x = 10
#if statement
# if x > 15:
#     print("x is greater than 5")
#     print(x * 2)
# print(x * 3)

# # write a program that checks the temperature provided by the user: if the  tempertature exceeds 32 then display cover tomatoes otherwise uncover tomatoes

# temperature = int(input("Enter the temperature -> "))
# #if - else statement
# if temperature > 32:
#     print("Cover tomatoes")
# else:
#     print("Uncover tomatoes")
       
# x = 4

# if x > 5:
#     print(f"{x} is greater than 5")
# else:
#     print(f"{x} is NOT greater than 5") 
    
#     #elif
    
# x = 5

# if x > 5:
#     print(f"{x} is greater than 5")
# elif x == 5:
#     print(f"{x} is equal to 5")
# else:
#     print(f"{x} is less than 5")
    
# user_name = "dennis"
# password = "secret"

# user_n = input("Enter your user name:")
# user_p = input("Enter your password:")

# if user_name == user_n and user_p == password and len(user_p) == 6:
#     print("You are logged in")
# else:
#     print(f"Incorrect username/password")


# if user_n== user_name:
#     if user_p == password:
#         print("You are logged in")
# else:
#     print(f"Incorrect username or password")

#write a python program that checks if a number is even or odd. if its even print the number is even if its odd print the number is odd otherwise print invalid number

number = int(input("Enter the number -> "))

if number % 2 == 0:
    print(f"The number {number} is even")
elif number % 2 != 0 and number % 2 == 1:
    print(f"The number {number} is odd")
else:
    print("The number is invalid")