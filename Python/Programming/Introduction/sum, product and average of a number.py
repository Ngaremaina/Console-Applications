# -*- coding: utf-8 -*-
"""
Created on Fri May 20 17:11:29 2022

@author: Ngare

Write a program that accepts three numbers and
 computes their sum, product and average.
"""

number1=float(input("Enter the first number -> "))
number2=float(input("Enter the second number -> "))
number3=float(input("Enter the third number -> "))

total=number1+number2+number3
product=number1*number2*number3
average=total/3

print("The sum = ",total,
      ", the product is ",product,
      "and the average = ", average)

