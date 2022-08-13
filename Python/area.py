# -*- coding: utf-8 -*-
"""
Created on Thu Aug 29 19:28:02 2019

@author: Admin
"""
import math

def circle_one(r):
    area=math.pi*r*r
    return area

inp=input('Enter angle\n')
a=float(inp)
angle=a/360
inp=input("Enter radius\n")
r=float(inp)
c=angle*circle_one(r)
print("Answer is:", c)
