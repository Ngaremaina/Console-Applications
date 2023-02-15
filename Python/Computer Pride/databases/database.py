import sqlite3
# create a connection to our database
connection = sqlite3.Connection("school.db")

if connection:
    print("Successful")
else:
    print("Connection Error")