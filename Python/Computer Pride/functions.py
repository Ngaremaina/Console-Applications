

# result = 0
def square(x, y):
    result = x ** y
    return result

# print(result)
# result = square(5, 2)
# print(result)
# print(square(5, 2))


# Namespaces -> Two types of namespaces namely: local and global
# local -> the variable can be accessed inside of a method/function only -> these are variables that are created inside methods
# global -> variables accesed globally (ootside and inside a function method). created outside a method

def greetUser(user_name):
    return f"Hello Everyone, my name is {user_name}"


name = input("Please enter your name: ")
print(greetUser(name))
print(greetUser("Peter"))
print(greetUser("Ian"))
print(greetUser("Owen"))
print(greetUser("Doctari"))