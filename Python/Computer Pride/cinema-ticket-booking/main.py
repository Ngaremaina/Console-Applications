import random
import string
import sqlite3

class User:
    """Represents a User that buys a cinema seat"""
    def __init__(self, name):
        self.name=name
        
    def buy(self,seat,card):
        """Buys the Ticket if the card is valid"""
        if seat.is_free():
            if card.validate(price = seat.get_price()):
                seat.occupy()
                ticket = Ticket(user=self, price=seat.get_price(), seat_number=seat.seat_id)
                ticket.to_pdf()
                return "Purchase was Successful!!"
            else:
                return "There was a problem with your card"
        else:
            return "Seat is taken"
    
class Seat:
    """Represents a cinema seat that can be taken by a user"""
    database = "cinema.db"
    
    def __init__(self,seat_id):
        self.seat_id=seat_id
        
    def get_price(self):
        """Get the price of a certain seat"""
        #connect to the database
        connection = sqlite3.connect(self.database)
        #create a cursor
        cursor = connection.cursor()
        #create our sql statement
        query = "SELECT price FROM seat WHERE seat_id = ?"
        #execute our query
        cursor.execute(query, [self.seat_id])
        #get the price from the db and store it in a variable
        price = cursor.fetchall()[0][0]
        return price
         
    def is_free(self):
        """Checks in the database if a seat is taken or not"""
        connection = sqlite3.connect(self.database)
        #create a cursor
        cursor = connection.cursor()
        #create our sql statement
        query = "SELECT taken FROM seat WHERE seat_id = ?"
        #execute our query
        cursor.execute(query, [self.seat_id])
        #fetch the results
        result = cursor.fetchall()[0][0]
        #check if the seat is available or not
        if result == 0:
            return True
        else:
            return False
        
    def occupy(self):
        """Changes the value of taken in the db from 0 to 1 if seat is free"""
        if self.is_free():
            connection = sqlite3.connect(self.database)
            #create a cursor
            cursor = connection.cursor()
            #create our sql statement
            query = "UPDATE seat SET taken = ? WHERE seat_id = ?"
            #execute our query
            cursor.execute(query, [1, self.seat_id])
            #commit changes to database
            connection.commit()
            #close the connection
            connection.close()         
            

class Card:
    """Represents a bank card needed to finalize a seat purchase"""
    database = "cinema.db"
    
    def __init__(self, type, number, cvc, holder):
        self.holder = holder
        self.cvc = cvc
        self.number = number
        self.type = type
    
    def validate(self, price):
        """Checks if card is valid and has balance, subtract price from balance"""
        connection = sqlite3.connect(self.database)
        #create a cursor
        cursor = connection.cursor()
        #create our sql statement
        query = "SELECT balance FROM card WHERE number = ? AND cvc = ?"
        #execute our query
        cursor.execute(query, [self.number,self.cvc])
        #fetch the results
        result = cursor.fetchall()
        if result:
            balance = result[0][0]
            if balance >= price:
                query = "UPDATE card SET balance = ? WHERE number = ? AND cvc = ?"
                cursor.execute(query,[balance - price, self.number, self.cvc])
                connection.commit()
                connection.close()
                
            
        
        
    
class Ticket:
    def __init__(self, user, price, seat_number):
        self.user = user
        self.price =price
        self.id = "".join([random.choice(string.ascii_letters) for i in range(8)])
        self.seat_number=seat_number
        
    def to_pdf(self):
        pass