#paragraph="Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum"

paragraph='''
Lorem Ipsum is simply dummy text of the printing and typesetting industry. Lorem Ipsum has been the industry's standard dummy text ever since the 1500s, when an unknown printer took a galley of type and scrambled it to make a type specimen book. It has survived not only five centuries, but also the leap into electronic typesetting, remaining essentially unchanged. It was popularised in the 1960s with the release of Letraset sheets containing Lorem Ipsum passages, and more recently with desktop publishing software like Aldus PageMaker including versions of Lorem Ipsum
'''

#print(paragraph)

name="2"+"2"

#name="Dennis"

user_name='Dennis'

# print(type(paragraph))

# print(type(name))

# print(type(user_name))

#print(name)

#indexing

string1="Cisco Router"

#How to extract the first character of the string? By using an index
#print(string1[0])

#Accessing the third element of the string
#print(string1[2])

#Accessing the space character of the string
#print(string1[5])

#Negative indexing - access the last character in the string
#print(string1[-1])

#Accessing R character in the string
#print(string1[-6])

#The len function
#print(len(string1))
#print(len(paragraph))

#Accessing an element using an invalid index

#print(string1[100]) # -> returns an IndexError

#String methods
a="Cisco Switch"

#1. index() -> returns the index of a given character in a string (first occurrence)
#print(a.index("i"))
#print(a.index("c"))
#print(a.index("s"))

#2. Count() -> return the number of elements appear in a string
# print(a.count("i")) # return 2
# print(a.count(" ")) # return 1

# #3. find() -> searches for a sequence of characters: return the index where that string starts
# print(a.find("tch"))
# print(a.find("xyz"))
# sub="z"
# if a.find(sub)==-1:
#     print(f"{sub} wasn't matched, please try again!")
    
# #4. lower() -> transforms a string into small letters
# print(a.lower())

# #5. upper() -> transforms a string into capital letters
# print(a.upper())
# print(a)

#6.startswith()
# print("--------------Startswith-------------------")
# print(a.startswith("C")) #return True

# #7.endswith()
# print("---------------Endswith--------------------")
# print(a.endswith("h")) #return True

# #8.strip() ->
# b="           Cisco Router         "
# print(len(b))
# print(b.strip())

# c="$$$Cisco Router$$$"
# print(c.strip("$"))

# print(b.replace(" ",""))

# #Create a variable to store your name in small letters and change name to have the first letter in caps
# name="sandra kibui"

# print(name.capitalize())

# #10. split() -> splits a string into substring -> return a list []
d="cisco,juniper,hp,avaya,nortel"
d=d.split(",")
print(len(d))

# user_names=input("Please enter your names separated by comma")
# usernames=user_names.split()

# print(user_names[0].capitalize() + " " + user_names[1].capitalize())
# print(f"{user_names[0].capitalize()} {user_names[1].capitalize()}" )

#11. join() ->
a="Cisco Switch"
print(".".join(d))

#string slicing(slices)

my_string="0 E2 10.110.8.9 [160/5] VIA 10.119.254.6, 0:01:00 Ethernet2"

#lets extract the first IP address in the string -> 10.110.8.9

print(my_string[5:])
print(my_string[5:59])

print(my_string[0:11])
print(my_string[:11])

print(my_string[:-48])
print(my_string[:-49])

print(my_string[-59:-49])
print(my_string[-59:-48])
# print(len(my_string))

print(my_string[:])
print(my_string[::2])

#extract hre2
print(my_string[52::2])
part=my_string[::2]
print(part[-4:-1])
sub=part[-4:-1]
#replacing hre to cre and make it upper case
sub=sub.replace("h","c").upper()

print(".".join(sub))
#print(sub)
#printing a string in reverse order using slicing and step
part=my_string[:]
sub=part[::-1]
print(part)
print(sub)

