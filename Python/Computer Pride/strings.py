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
print(a.count("i")) # return 2
print(a.count(" ")) # return 1

#3. find() -> searches for a sequence of characters: return the index where that string starts
print(a.find("tch"))
print(a.find("xyz"))
sub="z"
if a.find(sub)==-1:
    print(f"{sub} wasn't matched, please try again!")
    
#4. lower() -> transforms a string into small letters
print(a.lower())

#5. upper() -> transforms a string into capital letters
print(a.upper())
print(a)

#6.startswith()
print("--------------Startswith-------------------")
print(a.startswith("C")) #return True

#7.endswith()
print("---------------Endswith--------------------")
print(a.endswith("h")) #return True

#8.strip() ->
b="           Cisco Router         "
print(len(b))
print(b.strip())
#9. strip()
c="$$$Cisco Router$$$"
print(c.strip("$"))
#10. replace()
print(b.replace(" ",""))

#Create a variable to store your name in small letters and change name to have the first letter in caps
name="sandra"

print(name.capitalize())

