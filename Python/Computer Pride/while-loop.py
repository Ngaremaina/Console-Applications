# Python Loops
# while-loop
# x = 1

# while x <= 10:
#     print(x)
    # x = x + 1 # x += 1
    
# while True:
#     do something

# Nested loops
list1 = [4, 5, 6]
list2 = [10, 20, 30]

for x in list1:
    for y in list2:
        print(x * y)


# write a python program that generates the mathematical times table
# Times Tables for 5

times = int(input("Enter any number to generate a times tables: "))
print("_" * 70)
print(f"Times Table For {times}:")
print("_" * 70)

for x in range(1, 13):
    print(f"{x} X {times} = {x * times}")
print("_" * 70)
# 1 X 5 = 5
# 2 X 5 = 10
# 3 X 5 = 15
# 4 X 5 = 20
# 5 X 5 = 25
# 6 X 5 = 30
# 7 X 5 = 35
# 8 X 5 = 40
# 9 X 5 = 45
# 10 X 5 = 50
# 11 X 5 = 55
# 12 X 5 = 60

# for x in range(1, 13):
#     for y in range(1, 13):
#         print(f"{x} X {y} = {x * y}")
#     print("_______________________________________________")