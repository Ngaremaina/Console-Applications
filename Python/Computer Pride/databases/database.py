import sqlite3

connection = sqlite3.Connection("students.db")

if connection:
    print("Successful")
else:
    print("Unsuccessful")