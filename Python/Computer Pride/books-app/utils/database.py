#create our empty list to store our books
# books = []
books = "books.txt"
file_path = "books.txt"
#create a function that adds a book to our list
def add_book(name, author):
    # books.append({
    #     "name":name,
    #     "author": author,
    #     "read": False
        
    # })
    
    with open(file_path, 'a') as file:
        file.write(f"{name}, {author},0\n")
        print(f"Book with the name {name}, created successfully!!")
     
   
    
#create a function that shows/displays all the books to the user
# def display(book):
#     print(f"Book Title: {book['name']}, Written By: {book['author']}, Read Status is {book['read']}")
    
    
def get_all_books():
    # for book in books:
    #     print(f"Book Title: {book['name']}, Written By: {book['author']}, Read Status is {book['read']}")
    with open(file_path, 'r') as file:
        # content = file.read()
        all_books = [book.strip("\n").split(",") for book in file.readlines()]
        # return all_books
        return [
            {"name": book[0],"author":book[1],"read":book[2]} for book in all_books               
                
        ]
            # print(file.read())
    # return books
          
            
#create a function that marks a book as read -> changes False to True
def markbookasread(book_name):
    # for book in books:
    #     if name == book['name']:
    #         book['read'] = True
    #         display(book)
    # with open(file_path, 'a') as file:
    #     all_books = display()
    #     for book in all_books:
    #         name = book[0]
    #         author = book[1]
    #         read=book[2]
    #         if name.lower()==book_name.lower():
    #             read = '1'
    #             file.write(f"{name},{author},{read}")
                # book[2] = '1'
        # return all_books
    books = get_all_books()
    for book in books:
        if book['name'] == book_name:
            book['read'] =="1"
            
    _save_all_books(books)
                
#create a function to save all books
def _save_all_books(books):
    with open(file_path, 'w') as f:
        for book in books:
            f.write(f"{book['name']} written by {book['author']} read status{book['read']}\n")



def delete_book(name):
    # for book in books:
    #     if name == book['name']:
    #         books.remove(book)
    #         print(f"The book {book} has been deleted")
    
    # global books
    # books = [book for book in books if name.lower() != book['name'].lower()]
    # books.remove()
    # 
    books = get_all_books() 
    books = [book for book in books if book['name'] != name]
    _save_all_books(books)