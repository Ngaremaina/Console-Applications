# -*- coding: utf-8 -*-
"""
Created on Sat Aug 24 19:44:10 2019

@author: Admin
"""

total = 0 
count = 0 
while (True): 
    inp = input('Enter a number: ') 
    if inp == 'done': 
        break 
    value = float(inp) 
    total = total + value 
    count = count + 1
average = total / count 
print('Average:', average)
