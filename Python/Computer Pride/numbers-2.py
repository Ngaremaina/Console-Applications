num1 = 10
num2 = 2.5
# type = "whole" if type(num1) is int else "Floating point"
var_type=""

def check_type(x):
    # if type(x)==int:
    #     var_type="whole"
    # else:
    #     var_type="Floating-point"
    # return var_type
    data_type="whole" if type(x) == int else "Floating point"
    return data_type
#check the type of the variables
print(f"{num1} is a '{check_type(num1)}' number")
print(f"{num2} is a '{check_type(num2)}' number")
# print(f"{num2} is a '{type}' number")
# print(type(num2))

# arithmetic operators

# addition -> + -> 1 + 2
# subtraction -> - -> 1 - 2
# Division -> /
# Multiplication -> *
# integer Division -> //
# raising to a power -> ** ->  10 ** 2
# modulo -> finding the remainder of a number -> % -> 5 % 2

#comparison operators

# less than -> <
# greater than -> >
# less than or equal to -> <=
# greater than or equal to -> >=
# equal to -> ==
# not equals -> !=

# order of evaluation in a mathematical expression
print(100-5**2/5*2)

a=1.7
b=2
print(int(a))