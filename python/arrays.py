# -*- coding: utf-8 -*-
"""
Created on Sat Aug 10 11:31:13 2019

@author: Admin
"""

def multiplyList(myList) : 
      
    # Multiply elements one by one 
    result = 1
    for x in myList: 
         result = result * x  
    return result 

list1=[2,3,4]
list2=[2,5,6]
print(multiplyList(list1))