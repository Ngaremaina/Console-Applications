# create an empty list to store our movies
movies = [
    {
        'title':'The Mask',
        'director': 'Jim Carey',
        'year': '1996'
    }
]

# our menu options
MENU_OPTIONS = "\nEnter \n - 'a' to add a movie,  \n - 'l' to see your movies, \n - 'f' to find a movie by its title or \n - 'q' to quit. \nYour Choice: "

# create a function to create a movie
def add_movie():
    # get the movie info/properties
    movie_title = input("Enter the title of the new movie: ")
    movie_director = input("Enter the director of the new movie: ")
    movie_release_year = input("Enter the movie release year: ")
    
    # add the movie dictionary into our list
    movies.append({
        "title": movie_title,
        'director': movie_director,
        'year': movie_release_year
    })
    

# create a function to list all the movies in our collection
def show_movies():
    for movie in movies:
        print_movie(movie)
        
        
# create a function to search/find a movie by its title
def find_movie():
    title = input("Enter the title of the movie you wish to find: ")
    for movie in movies:
        # if title in movie['title']
        if movie['title'].lower() == title.lower():
            print_movie(movie)
        # if
        #     print(f"movie with title ({title}) not available at the moment.")

# helper function for printing the movie in a nice format
def print_movie(movie):
    print(f"{movie['title']}, Directed By: {movie['director']}, Release in {movie['year']}")
    
    

# display the menu to the user
# create a function to display the menu to the user
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
            print("Invalid Choice, Please try again!!!")
        selection = input(MENU_OPTIONS)
    
# call the menu method
menu()



    
     