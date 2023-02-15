# Concatenation -> joining two or more string together
# its done using the addition operator - '+'
first_name = input("Enter your First Name: ")
last_name = input("Enter your Last Name too: ")


# String formatting
print(first_name + " " + last_name + ".")
# f-string
print(f"My name is: {first_name} {last_name}.")
# format() 
print("My name is: {first} {last}.".format(last=last_name, first=first_name))
