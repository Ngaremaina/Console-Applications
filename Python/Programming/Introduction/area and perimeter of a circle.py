# -*- coding: utf-8 -*-
"""
Created on Fri May 20 16:41:34 2022

@author: Ngare

Write a program that accepts the radius of a circle 
and computes both it’s area and circumference
"""

import math

inp=input("Enter the radius -> ")
radius=float(inp)

area=float(math.pi*radius*radius)
circumference=float(2*math.pi*radius)

print("The area =", area,"and the circumference is ", circumference)