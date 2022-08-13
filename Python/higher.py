# -*- coding: utf-8 -*-
"""
Created on Tue Oct  8 10:16:50 2019

@author: Admin
"""

lst = []
num = int(input('How many numbers: '))
print("Enter the numbers")
for n in range(num):
    numbers = int(input(''))
    lst.append(numbers)
print("Maximum element in the list is :", max(lst))
print("Minimum element in the list is :", min(lst))