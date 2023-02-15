# -*- coding: utf-8 -*-
"""
Created on Fri May 20 17:04:22 2022

@author: Ngare

Write a program that accepts distance traveled in metres 
and the time taken in minutes
and then outputs the speed in kilometers per hour (km/h).
E.g. if someone enters a distance (in metres) of 500 and 
a time (in minutes) of 15
the output for speed should be 2 km/h.
"""

distance=float(input("Enter the distance covered -> "))
time=float(input("Enter the time covered -> "))

km=distance/1000
hr=time/60

speed=km/hr

print("The speed is ", speed, "km/hr")