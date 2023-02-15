import requests

app_id = "4b55aada"
app_key = "62b760835f3546d3d7111edd448b68f9"

recipe = input("Enter recipe to search: ")

url = "https://api.edamam.com/api/recipes/v2?type=public&q={}&app_id=4b55aada&app_key=%2062b760835f3546d3d7111edd448b68f9".format(recipe)

url = f"https://api.edamam.com/api/recipes/v2?type=public&q={recipe}&app_id=4b55aada&app_key=%2062b760835f3546d3d7111edd448b68f9"

# recipe_request = requests.get(url).json()
# print(recipe_request.status_code)

# recipes = recipe_request.json()

# print(recipe_request = requests.get(url).json()
# ["count"])
# recipe_request = requests.get(url).json()
# recipes = recipe_request["hits"][0]['recipe']["label"]
# for recipe in recipes["hits"][0]['recipe']["label"]:
#     print(recipe)