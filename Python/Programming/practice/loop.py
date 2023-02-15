# -*- coding: utf-8 -*-
"""
Created on Fri Jul 12 11:01:33 2019

@author: Admin
"""

while True:
    try:
        print('Enter 1 to end')
        line=input('>')
        if line=='1':
            break
        print(line)
        print('Done!')
    except:
        print("enter value")