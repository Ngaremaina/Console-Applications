# -*- coding: utf-8 -*-
"""
Created on Fri May 20 16:45:31 2022

@author: Ngare

Write a program that accepts measurements in cm 
and converts them into metres.
If someone enters 200 for example, 
the output should take the form:
        200 cm = 2 metres.
"""
inp=input("Enter the distance -> ")
distance=float(inp)

meter=distance/100

print(distance, "m =" ,meter,"metres")

