# -*- coding: utf-8 -*-
"""
Created on Fri May 20 16:56:26 2022

@author: Ngare
Write a program that accepts the weight of a package in grams
 and then converts it to kilograms
and also specifies how many such packages form one kilogram.
For example, if the user enters the weight (in grams) of the
 package as 100, the output should be:
    The weight of the package is 0.1 kilograms.
    It takes 10 such packages to form one kilogram.

"""

weight=float(input("Enter the weight -> "))
kg =weight/1000
packet=kg*100

print("The weight of the package is",kg,"kilograms")
print("It takes",packet,"such packages to form one kilogram.")

