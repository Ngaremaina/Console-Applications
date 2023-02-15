#Concatenation -> joining two or more strings together
#it's done using the addition operator - '+'
# first_name = "Owen"
# last_name = "Ngare"
# name=first_name+last_name
# print(first_name + last_name)
# print(name)

first_name=input("Enter your first name: -> ")
last_name=input("Enter your last name: -> ")

print(first_name + " " + last_name)

# string formatting
# f-string
print(f"My name is {first_name} {last_name}")
# format()
print("My name is: {} {}".format(first_name, last_name))
print("My names are {first} {last}".format(first=first_name, last=last_name))


