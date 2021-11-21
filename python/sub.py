# -*- coding: utf-8 -*-
"""
Created on Sat Aug 24 20:03:56 2019

@author: Admin
"""

answer=0
count = 0 
while (True): 
    inp = input('Enter a number: ') 
    if inp == '=': 
        break 
    value = float(inp) 
    answer = value - answer
    count = count + 1
print('value:', answer)