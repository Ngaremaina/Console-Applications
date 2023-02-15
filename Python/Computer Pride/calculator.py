import math
isRunning = True
while isRunning:
    print("\nChoose an Option\n\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Remainder of a number\n6. Square Root of a Number\n7. Power of a Number\n8. Logarithm\n9. Sine\n10. Cosine\n11. Tangent\n")

    # get the users choice
    user_choice = input("Enter Your Choice: ")
    
    # Addition
    if user_choice == "1":
        num1 = float(input("Enter first Number: "))
        num2 = float(input("Enter Second Number: "))
        sum = num1 + num2
        print(f"The sum of {num1} and {num2} is {sum}")
        
        back = input("Do you wish to go the menu? (Y/N): ")
        if back.lower() == 'y':
            continue
        else:
            isRunning = False
        
    # Subtraction 
    elif user_choice == "2":
        num1 = float(input("Enter first Number: "))
        num2 = float(input("Enter Second Number: "))
        difference = num1 - num2
        print(f"The difference of {num1} and {num2} is {difference}")
        
        back = input("Do you wish to go the menu? (Y/N): ")
        if back.lower() == 'y':
            continue
        else:
            break
     
    # Multiplication 
    elif user_choice == "3":
        num1 = float(input("Enter first Number: "))
        num2 = float(input("Enter Second Number: "))
        product = num1 * num2
        print(f"The Product of {num1} and {num2} is {product}")
        
        back = input("Do you wish to go the menu? (Y/N): ")
        if back.lower() == 'y':
            continue
        else:
            break
     
    # Division 
    elif user_choice == "4":
        num1 = float(input("Enter first Number: "))
        num2 = float(input("Enter Second Number: "))
        quotient = num1 / num2
        print(f"The Quotient of {num1} and {num2} is {quotient}")
        
        back = input("Do you wish to go the menu? (Y/N): ")
        if back.lower() == 'y':
            continue
        else:
            break
     
    # Remainder of a number 
    elif user_choice == "5":
        num1 = float(input("Enter first Number: "))
        num2 = float(input("Enter Second Number: "))
        remainder = num1 % num2
        print(f"The Remainder of {num1} divided by {num2} is {remainder}")
        
        back = input("Do you wish to go the menu? (Y/N): ")
        if back.lower() == 'y':
            continue
        else:
            break
     
    # square root of a number 
    elif user_choice == "6":
        num = float(input("Enter a Number to find its Square root: "))
        root = math.sqrt(num)
        print(f"The Square root of {num} is {root}")
        
        back = input("Do you wish to go the menu? (Y/N): ")
        if back.lower() == 'y':
            continue
        else:
            break
     
    # square/power of a number 
    elif user_choice == "7":
        num1 = float(input("Enter a base Number to find its Square: "))
        num2 = float(input("Enter an exponent/power: "))
        power = pow(num1, num2)
        print(f"The Square root of {num1} raised to {num2} is {power}")
        
        back = input("Do you wish to go the menu? (Y/N): ")
        if back.lower() == 'y':
            continue
        else:
            break
     
    # logarithm 
    elif user_choice == "8":
        num1 = float(input("Enter a number to find its log in base 2: "))   
        logarithm = math.log(num1, 2)
        print(f"The logarithm of {num1} is {logarithm}")
        
        back = input("Do you wish to go the menu? (Y/N): ")
        if back.lower() == 'y':
            continue
        else:
            break
     
    # sine  
    elif user_choice == "9":
        num1 = float(input("Enter an angle in (degrees) to find its sine: "))
        sine = round(math.sin(math.radians(num1)), 4)
        print(f"The sine of {num1} is: {sine}")
        
        back = input("Do you wish to go the menu? (Y/N): ")
        if back.lower() == 'y':
            continue
        else:
            break
     
    # Cosine  
    elif user_choice == "10":
        num1 = float(input("Enter an angle in (degrees) to find its sine: "))
        cosine = round(math.cos(math.radians(num1)), 4)
        print(f"The cos of {num1} is: {cosine}")
        
        back = input("Do you wish to go the menu? (Y/N): ")
        if back.lower() == 'y':
            continue
        else:
            break
     
    # Tangent  
    elif user_choice == "11":
        num1 = float(input("Enter an angle in (degrees) to find its Tangent: "))
        tangent = round(math.tan(math.radians(num1)), 4)
        print(f"The Tangent of {num1} is: {tangent}")
        
        back = input("Do you wish to go the menu? (Y/N): ")
        if back.lower() == 'y':
            continue
        else:
            break
    else:
        print("Invalid Option. PleaseTry Again!")