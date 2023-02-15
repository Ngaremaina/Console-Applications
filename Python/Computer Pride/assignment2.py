# 1.	START
# 2.	While True
# 3.	Capture the itemID, itemName, quantity and unit price
# 4.	Store the input to itemID, itemName, quantity and unit price respectively
# 5.	Calculate the cost price using the VAT and unit price ie (cost price * 0.16) + cost price
# 6.	Store the output of step 5 to cost price
# 7.	Calculate the total using cost price and quantity ie cost price * quantity
# 8.	Store the output of step 7 in total price
# 9.	Display the total price
# 10.	Capture the amount paid by the customer
# 11.	Store the input to amount
# 12.	Calculate the difference between the amount and total price
# 13.	Store the output of step 12 to balance
# 14.	Display the balance to be given to the customer
# 15.	STOP

# print("The first question")
# while True:
#     item_ID = int(input("Enter the item ID -> "))
#     item_name = input("Enter the name -> ")
#     quantity = int(input("Enter the quantity -> "))
#     unit_price = int(input("Enter teh unit price -> "))

#     cost_price = (unit_price * 0.16) + unit_price
#     total_price = cost_price * quantity

#     print(f"The total price is {total_price}")

#     amount = int(input("Enter the amount of payment given by the customer -> "))

#     balance = amount - total_price

#     print(f"The balance is {balance}")
        
print("\n")

#park
park1=set()
park2=set()

while True:
    print("1.First park")
    print("2.Second park")
    print("3.Display first park")
    print("4.Display second park")
    print("5.Display common animals in both parks")
    print("6.Display animals only in first gamepark")
    print("7.Display total number of animals in second gamepark")
    print("8.Exit")
    inp=int(input("Enter your choice -> "))
    if inp==1:
        inp=input("Enter the name of the animal -> ")
        
        park1.add(inp)
    elif inp == 2:
        
        inp=input("Enter the name of the animal -> ")
        
        park2.add(inp)
    elif inp==3:
        print(park1)
    elif inp ==4 :
        print(park2)
    elif inp ==5 :
        print(park1.intersection(park2))
    elif inp == 6:
        print(park1.difference(park2))
    elif inp == 7:
        print(len(park2))
    elif inp == 8:
        break
