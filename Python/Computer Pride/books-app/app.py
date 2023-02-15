from utils import database

# all_books = database.books

# print(all_books)

USER_CHOICE ="""
Enter:
- 'a' to add a new book
- 'l' to list all the books
- 'r' to mark a book as read
- 'd' to delete a book
- 'q' to quit

Enter your choice: """
#the menu
def menu():
    user_input = input(USER_CHOICE)
    #deal with the user input choice
    while user_input != 'q':
        if user_input == 'a':
            prompt_add_book()
        elif user_input == 'l':
            list_books()
        elif user_input == 'd':
            prompt_delete_book()
        elif user_input == 'r':
            prompt_read_book()
        else:
            print("Invalid choice, Please try again!!!")
        user_input = input(USER_CHOICE)
            
#create a function to ask the user for the book name and author
def prompt_add_book():
    name = input("Enter the name of the new book: ")
    author = input("Enter the author of the new book: ")
    database.add_book(name, author)
    
#a function to show all the books in our list
# def list_books():
#     for book in database.books:
#             database.display(book)  
            
def list_books():
    # all_books = database.display()
    # s = "" if len(all_books) == 1 else "s"
    # print(f"We have {len(all_books)} book{s} at the moment.")
    # # for book in all_books:
    # #     print(f"Book Title: {book['name']}, Written By: {book['author']}, Read Status is {book['read']}")
    # for index, book in enumerate(all_books):
    #     status = "Yes" if book['read'] == True else "No"
    #     print(f"{index + 1}. Book Title: {book['name']}, Written By: {book['author']}, Read Status is {status}")
    # s = "" if len(all_books) == 1 else "s"
    # if len(all_books) > 0:
    #     print("We have {len(all_books)} book{s} at the moment.")
    # else:
    #     print("We have {len(all_books)} at the moment. Come back later")
    # all_books = database.display()
    # for book in all_books:
    #     name = book[0]
    #     author = book[1]
    #     read = book[2]
    #     status = "Yes" if read == '1' else "No"
    #     # if read == 0:
    #     #     read = "Yes"
    #     # else:
    #     #     read = "No"
    #     # print(f"{name}, Written By: {author}, Read Status {read}")
    #     print(f"{name}, Written By: {author}, Read Status {status}")
    all_books = database.get_all_books()
    # print(all_books)
    for book in all_books:
        # print(book)
        read = "Yes" if book['read']== '1' else "No"
        print(f"{book['name']}, written by{book['author']}, read staus:{read}")
    
# def list_books():
#     database.display()
             
#a function that asks the user for book name and changes it to 'read in out list
def prompt_read_book():
     name = input("Enter the name of the new book: ")
     database.markbookasread(name)
            
             
#a function that asks for book name and removes it from our list
def prompt_delete_book():
    name = input("Enter the name of the book: ")
    database.delete_book(name)
               

menu()