import sqlite3
# create a connection to our database
connection = sqlite3.Connection("school.db")

if connection:
    print("Successful")
else:
    print("Connection Error")
    
#create a table in our database called student
# sql = """CREATE table student
#         (id )"""
#CRUD
# C -> Create -> Inserting a record into database
# R -> Read/Retrieve -> Fetching records in a database
# U -> Update -> Modify records in a database
# D -> Delete -> Delete a record from database
# INSERT INTO [table_name]
#     (column1,column2, column3, column4,column5)
#     VALUES(value1,value2,value3,value4,value5)
    
# SELECT column(s) FROM table_name
# UPDATE table_name SET column = new_value WHERE id = id_to_update
# DELETE FROM table_name WHERE id = id_to_delete
    
# lets select all students in our database
# create a connection
connection = sqlite3.Connection("school.db")
# create a cursor object
cursor = connection.cursor()
#create the query statement -> fetch all students
query = "SELECT * FROM students"
#execute the query and save the results in a variable
results= cursor.execute(query)
#display the results
students = results.fetchall()
print(students)
#close the database connection
connection.close()
