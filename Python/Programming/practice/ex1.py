# -*- coding: utf-8 -*-
"""
Created on Sat Aug 24 19:45:35 2019

@author: Admin
"""
result = 0
count = 0 
while (True): 
    inp = input('Enter a number: ') 
    if inp == '=': 
        break 
    value = float(inp) 
    result = value - result 
    count = count + 1
print('value:', result)