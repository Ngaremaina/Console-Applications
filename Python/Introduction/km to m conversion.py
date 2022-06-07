# -*- coding: utf-8 -*-
"""
Created on Fri May 20 16:48:55 2022

@author: Ngare

Write a program that accepts measurements in kilometers 
and the converts and displays them in metres.
E.g. if someone enters 0.4 (kilometers) the output should 
take the form
 0.4 kilometers = 400 metres.
 
"""
inp = input("Enter the distance -> ")
distance=float(inp)

m=distance*1000

print(distance, " kilometers = ", m," metres. ")


