from utils import database

USER_CHOICE = """
Enter:
- 'a' to add a new book
- 'l' to list all the books
- 'r' to mark a book as read
- 'd' to delete a book
- 'q' to quit

Enter Your Your Choice: """

# the menu
def menu():
    user_input = input(USER_CHOICE)
    # deal with the user's input choice
    while user_input != 'q':
        if user_input == 'a':
            prompt_add_book()
    
# create a function to ask the user for the book name and author
def prompt_add_book():
    name = input("Enter the name of the new book: ")
    author = input("Enter the author of the new book: ")
    database.add_book(name, author)

# a function to show all the books in our list
def list_books():
    pass

# a function that asks the user for book name and changes it to 'read' in our list
def prompt_read_book():
    pass

# a function thats asks for book name and removesit from our list
def prompt_delete_book():
    pass 

# call our menu function
menu()
