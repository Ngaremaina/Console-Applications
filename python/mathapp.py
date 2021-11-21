# -*- coding: utf-8 -*-
"""
Created on Mon Jul  8 12:21:21 2019

@author: Admin
"""
import math 

def subtraction(k,l):
    minus=k-l
    return minus  

def division(k,l):
    divide=k/l
    return divide
    
def remainder(k, l):
    remain=k%l
    return remain 

def root(d, x):
    r=d**(1/x)    
    return r

def roots(a, b, c):
    root=(b*b)-(4*a*c)
    return root 

def roots_one(a, b, c):
    x=(-b+math.sqrt(b*b-4*a*c))/(2*a)
    y=(-b-math.sqrt(b*b-4*a*c))/(2*a)
    squareroot=x,+y
    return squareroot 
   
def median(n):
    middle=(n+1)/2
    return middle  
 
def median_one(lcb, n, cf, f, i):
    middle=lcb+(((n/2)-cf)/f)*i
    return middle   

def median_two(lcb, n, cf, f, i):
    middle=lcb+((((n+1)/2)-cf)/f)*i
    return middle  
 
def mode(lcb, f, g, h, i):
    most=lcb+((f-g)/(2*f-g-h))*i
    return most   

def percentile_one(k, n):
    P=(k/100)*(n+1)
    return P   
 
def percentile_two(lcb, k, n, cfb, f, i):
    P=lcb+(((k/100)*(n+1)-cfb)/f)*i
    return P  
 
while True:
    print("Hi and welcome, please enter your choice to continue and 6 to close")
    inp=input("1.Basic Maths\n2.Power form\n3.Expression\n4.Statistics\n5.Angles\n6.High and low\n7.Factorial\n8.Logarithm\n9.Exponential\n10.Exit\n")
    choice=int(inp)
    
    if (choice==1):
        inp=input("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n")
        answer=int(inp)
        
        if (answer==1):
            total=0
            print('Enter the values and press = to continue')
            while (True): 
                inp = input() 
                if inp == '=': 
                    break 
                value = float(inp) 
                total = total + value 
            print("Answer is:", total)
            
        elif (answer==2):
            total=0
            print('Enter the values and press = to continue')
            while (True): 
                inp = input() 
                if inp == '=': 
                    break 
                value = float(inp) 
                total=total-value
            print("Answer is:", total)
            
        elif (answer==3):
             total = 1
             count = 0 
             print('Enter the values and press = to continue')
             while (True): 
                 inp = input() 
                 if inp == '=': 
                     break 
                 value = float(inp) 
                 total = total * value 
                 count = count + 1
             print("Answer is:", total)
             
        elif (answer==4):
            inp=input("Enter your first number\n")
            k=float(inp)
            inp=input("Enter your second number\n")
            l=float(inp)
            v=division(k,l)
            w=remainder(k,l)
            print("Answer is:",v, "and remainder is:", w)
            
   
                
    elif (choice==2):
        inp=input("1.Power\n2.Root\n")
        answer=int(inp)
        
        if (answer==1):
            inp=input("enter integer\n")
            x=float(inp)
            inp=input("enter power form\n")
            y=float(inp)
            power=x**y
            print(power)
            
        elif (answer==2):
            inp=input("Enter integer\n")
            d=float(inp)
            inp=input("Enter the root form\n")
            x=float(inp)
            w=root(d, x)
            print("Answer is:",w)
            
    elif (choice==3):
        inp=input("1.Roots\n2.Quadratic equation\n")
        answer=int(inp)
        
        if (answer==1):
            inp=input("Enter a\n")
            a=float(inp)
            inp=input("Enter b\n")
            b=float(inp)
            inp=input("Enter c\n")
            c=float(inp)
            r=roots(a, b, c)
            print("The root is ",r)
            
            if (r>0):
                print("Roots are real and distinct")
            elif (r<0):
                print("Roots are complex")
            else:
                print("Roots are real and equal")
                
        elif (answer==2):
            inp=input("Enter a\n")
            a=float(inp)
            inp=input("Enter b\n")
            b=float(inp)
            inp=input("Enter c\n")
            c=float(inp)
            z=roots_one(a,b,c)
            print("Answer is:",z)
            
    elif (choice==4):
        inp=input("Enter your choice\n1. Mode\n2. Median\n3. Mean\n4. Percentile\n5. Geometric mean\n6. Harmonic Mean\n")
        inp=input("6.Harmonic mean\n")
        answer=int(inp)
        
        if (answer==1):
            inp=input("Enter L.C.B\n")
            lcb=float(inp)
            inp=input("Enter f\n")
            f=float(inp)
            inp=input("Enter fa\n")
            g=float(inp)
            inp=input("Enter fb\n")
            h=float(inp)
            inp=input("Enter i\n")
            i=float(inp)
            mf=mode(lcb, f, g, h, i)
            print("Answer is:",mf)
            
        elif (answer==2):
            inp=input("1. n\n2.n+1\n3. Ungrouped\n")
            choice=int(inp)
            
            if (choice==1):
                inp=input("Enter L.C.B\n")
                lcb=float(inp)
                inp=input("Enter N\n")
                n=float(inp)
                inp=input("Enter Cumulative frequency\n")
                cf=float(inp)
                inp=input("Enter frequency\n")
                f=float(inp)
                inp=input("Enter x\n")
                i=float(inp)
                m=median_one(lcb, n, cf, f, i)
                print("Answer is:",m)
                
            elif (choice==2):
                inp=input("Enter L.C.B\n")
                lcb=float(inp)
                inp=input("Enter N\n")
                n=float(inp)
                inp=input("Enter Cumulative frequency\n")
                cf=float(inp)
                inp=input("Enter frequency\n")
                f=float(inp)
                inp=input("Enter x\n")
                i=float(inp)
                m=median_two(lcb, n, cf, f, i)
                print("Answer is:",m)
                
            elif (choice==3):
                inp=input("Enter n\n")
                n=float(inp)
                w=median(n)
                print("Answer is:", w)
                
        elif (answer==3):
            total = 0 
            count = 0 
            print('Enter values to find mean and press = to continue')
            while (True): 
                inp = input() 
                if inp == '=': 
                    break 
                value = float(inp) 
                total = total + value 
                count = count + 1
            average = total / count 
            print('Mean:', average)
            
        elif (answer==4):
            inp=input("1.Ungrouped\n2.Grouped\n")
            choice=float(inp)
            
            if (choice==1):
              inp=input("Enter k\n")
              k=float(inp)
              inp=input("Enter n\n")
              n=float(inp)
              s=percentile_one(k, n)
              print("Answer is:",s)
              
            elif (choice==2):
                inp=input("Enter lcb\n")
                lcb=float(inp)
                inp=input("Enter k\n")
                k=float(inp)
                inp=input("Enter n\n")
                n=float(inp)
                inp=input("Enter cfb\n")
                cfb=float(inp)
                inp=input("Enter f\n")
                f=float(inp)
                inp=input("Enter i\n")
                i=float(inp)
                t=percentile_two(lcb, k, n, cfb, f, i)
                print("Answer is:", t)
                
        elif (answer==5):
            total = 1
            count = 0 
            print("Enter the value of n")
            n=float(inp)
            print('Enter the values and press = to continue')
            while (True):
                inp = input() 
                if inp == '=': 
                    break 
                value = float(inp) 
                total = total * value                 
                count = count + 1
                mean=math.root(total,n)
            print("The geometric mean is:", mean)
        
        elif (answer==6):
            total=0
            print('Enter the values and press = to continue')
            while (True): 
                inp = input() 
                if inp == '=': 
                    break 
                value = float(inp) 
                total = math.reciprocal/(total + value) 
                
            print("Answer is:", total)
            
                
    elif (choice==5):
        inp=input("1.Sine\n2.Cosine\n3.Tangent\n")
        answer=int(inp)
        
        if (answer==1):
            inp=input("Enter angle\n")
            angle=float(inp)
            sine=math.sin(angle)
            print("Sine is:", sine)
            
        if (answer==2):
            inp=input("Enter angle\n")
            angle=float(inp)
            cosine=math.cos(angle)
            print("Cosine is:", cosine)
            
        if (answer==3):
            inp=input("Enter angle\n")
            angle=float(inp)
            tangent=math.tan(angle)
            print("Tangent is:", tangent)
            
    
    
    elif (choice==11):
        inp=input("1. Distance\n2. Weight\n3. Temperature\n")
        answer=int(inp)
        
        if (answer==1):
            inp=input("Enter your distance\n")
            distance=float(inp)
            inp=input("Convert to?\n1.cm\n")
            s=float(inp)
            
                
        if (answer==3):
            inp=input("1. Degree to farenheit\n2. Farenheit to celcius\n")
            a=int(inp)
            
            if (a==1):
                inp=input("Enter your degrees in farenheit\n")
                fahr=float(inp)
                cel=(fahr-32.0)*5.0/9.0
                print("Degrees in celcius is -> ", cel)
                
            elif (a==2):
                inp=input("Enter degrees in celcius\n")
                cel=float(inp)
                fahr=(cel+32)*9.0/5.0
                print("Degrees in farenheit is -> ", fahr)
                
    elif (choice==6):
        numlist = []
        inp=input('How many numbers: ')
        a=int(inp)
        print("Enter the numbers")
        for n in range(a):
            numbers = float(input(''))
            numlist.append(numbers)
        print("Maximum element in the list is :", max(numlist))
        print("Minimum element in the list is :", min(numlist))
        
    elif (choice==7):
        inp=input("Enter value\n")
        value=float(inp)
        e=math.factorial(value)
        print("Factorial is:", e)
        
    elif (choice==8):
        inp=input("Enter integer\n")
        a=float(inp)
        inp=input("Enter base\n")
        b=float(inp)
        w=math.log(a, b)
        print("Log is:", w)
        
    elif (choice==9):
        inp=input("Enter integer\n")
        a=float(inp)
        x=math.exp(a)
        print("Exponential is:", x)
    elif (choice==10):
        print("Thankyou and goodbye")
        break
    
        


    
    
