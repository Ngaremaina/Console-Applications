# -*- coding: utf-8 -*-
"""
Created on Fri May 20 10:34:08 2022

@author: Ngare

Write a program that accepts the age of a person,
if the person is 18 and above, it should print You can vote.
otherwise it should print You are too young to vote.
"""

inp=input("Enter your age -> ")
age=int(inp)
if age<18:
    print("You are too young")
else:
    print("You can vote")