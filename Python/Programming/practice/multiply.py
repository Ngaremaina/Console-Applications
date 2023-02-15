# -*- coding: utf-8 -*-
"""
Created on Thu Aug 15 00:03:36 2019

@author: Admin
"""

def multiplyList(myList) : 
      
    # Multiply elements one by one 
    result = 1
    for x in myList: 
         result = result * x  
    return result  
      
# Driver code 
inp=input("Enter values\n")
list1=float(inp)
inp=input("\n")
list2=float(inp)
if (inp=='='):
    print(multiplyList(list1)) 
    print(multiplyList(list2))
