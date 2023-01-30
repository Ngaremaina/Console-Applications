# a = 1
# b = 2
# print(a==b)
# print(b==c)

# fix the last line so that it printd the sum of 1 and 2

# a = "1"
# b = 2
# print(int(a) + b)

#Expected output is 3

import math
# num1 = 10
# num2 = 2.5
# type = "whole" if type(num1) is int else "Floating point"

# #check the type of the variables
# print(f"{num1} is a '{type}' number")
# print(f"{num2} is a '{type}' number")
# # print(type(num2))

#write a python program that asks the user for their name and age. Then processes the input then outputs/prints out the age of the user alongside the user's age in seconds

# name=input("Enter the name -> ")
# age=int(input("Enter the age -> "))

# seconds = age * 365 * 24 * 60 * 60
# print("Hello " , name , " you have lived for ", seconds, "seconds")
# print(f"Hello, {name}, you have lived for {seconds} seconds")

# naming convention in python
# camel case -> userName
# pascal case -> UserNameAge
# snake case -> user_name

#write a program that accepts the radius of a circle and prints the radius of the circle and the circumference of the circle
#Input of radius
# radius=int(input("Enter the radius -> "))

# circumference=2*math.pi*radius
# area=math.pi*radius**2
# # area=math.pi*radius*radius

# print(f"The radius is {radius} and circumference is {circumference}cm\u00b3 and area is {area}cm\u00b2 \U0001F923")

# #Rounding off the circumference and area
# circum=round(circumference)
# ar=round(area)

# print(f"Circumference = {circum}cm and area = {ar}cm\u00b2")


#write a program that asks for their age and then outputs the decades they have lived (Eg if the user id 18 years then they have lived for 1 decade)

# age = int(input("Enter the age -> "))

# # decade=int(age/10)
# decade = age // 10
# s = "s" if decade > 1 else ""
# print(f"You have lived for {decade} decade{s}.")

#Write a python program that asks the user for the scores of 5 subjects and output the average score

subject1 = int(input("Enter your first subject -> "))
subject2 = int(input("Enter your second subject -> "))
subject3 = int(input("Enter your third subject -> "))
subject4 = int(input("Enter your fourth subject -> "))
subject5 = int(input("Enter your fifth subject -> "))
    
sum = subject1 + subject2 + subject3 + subject4 + subject5
average = sum / 5

print(f"The average mark of all the subjects is - > {average}")
