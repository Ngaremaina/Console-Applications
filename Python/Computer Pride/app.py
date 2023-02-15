movies= []

MENU_OPTIONS = "\nEnter \n - 'a' to add a movie, \n - 'l' to see your movies, \n - 'f' to find a movie by its title\n - 'q' to quit: \nYour choice: "

# selection = input(MENU_OPTIONS)
#display the menu to the user
#create a function o display the menu to the user
def add_movie():
    #get the movie info/properties
    movie_title = input("Enter the title of the new movie: ")
    movie_director = input("Enter the director of the new movie: ")
    movie_release_year = input("Enter the movie release year: ")
    
    #add the movie dictionary into our list
    movies.append({
        "title":movie_title,
        "director": movie_director,
        'year':movie_release_year
    })
    
#create a function to list all the movies in our collection
def show_movies():
    for movie in movies:
        print_movie(movie)   

#helper function for printing the movie in a nice format
def print_movie(movie):
    print(f"Movie Title: {movie['title']}, Directed By: {movie['director']}, Released in {movie['year']}")
    # print(f"Movie Director: {movie['director']}")
    # print(f"Release Year: {movie['year']}")
    
#create a function to search/find a movie by its title
def find_movie():
    title = input("Enter the title of the movie you wish to find: ")
    # finding = [movie for movie in movies if movie['title'] == title]
    # print(finding)
    for movie in movies:
        if title.lower() == movie['title'].lower():
            print_movie(movie)
        else:
            print(f"Movie with title {title} is not available")
            break
    # if title not in movies['title']:
    #     print(f"Movie with title {title} is not available")
            
            
            
#display the menu to the user 
def menu():
    selection = input(MENU_OPTIONS)
    while selection != 'q':
        if selection == 'a':
            add_movie()
        elif selection == 'l':
            show_movies()
        elif selection == 'f':
            find_movie()
        else:
            print("Invalid choice, Please try again!!!")
        selection = input(MENU_OPTIONS)
menu()