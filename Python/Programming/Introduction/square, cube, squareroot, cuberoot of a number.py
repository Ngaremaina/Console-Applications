# -*- coding: utf-8 -*-
"""
Created on Fri May 20 16:52:35 2022

@author: Ngare

Write a program that accepts a number and 
then outputs it’s square,
cube, square root and cube root.

"""
import math
number=float(input("Enter your number -> "))

square=math.pow(number, 2)
cube=math.pow(number, 3)
squareroot=math.sqrt(number)

print("The square = ", square,", the cube = ",cube
      ," the squareroot = ", squareroot)