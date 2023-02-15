import sqlite3
# create a connection to our database
connection = sqlite3.Connection("school.db")

if connection:
    print("Successful")
else:
    print("Connection Error")
    
#create a table in our database called student
sql = """CREATE table student
        (id )"""
