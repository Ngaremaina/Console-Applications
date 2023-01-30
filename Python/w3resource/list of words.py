# Write a Python function that takes a list of words and return the longest word and the length of the longest one

inp=input("Enter a list of words -> ")

words=[]

for n in words:
    words.append((len(n),n))
words.sort()

print(len(inp))

# def find_longest_word(words_list):
#     word_len = []
#     for n in words_list:
#         word_len.append((len(n), n))
#     word_len.sort()
#     return word_len[-1][0], word_len[-1][1]
# result = find_longest_word(["PHP", "Exercises", "Backend"])
# print("\nLongest word: ",result[1])
# print("Length of the longest word: ",result[0])
