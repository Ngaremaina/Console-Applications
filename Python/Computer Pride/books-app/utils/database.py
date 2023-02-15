# create our empty list to store our books
books = []

# create a function that adds a book to our list
def add_book(name, author):
    books.append({
        "name": name,
        "author": author,
        "read": False
    })

# create a function that shoes/displays all the books to the user

