# -*- coding: utf-8 -*-
"""
Created on Thu Aug 29 14:23:31 2019

@author: Admin
"""

def min(values): 
    smallest = None 
    for value in values: 
        if smallest is None or value < smallest: 
            smallest = value 
    return smallest

print('enter values')
while (True):
    inp=input()
    if inp == '=':
        break
    values=float(inp)
print('min', min(values))