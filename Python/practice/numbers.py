# -*- coding: utf-8 -*-
"""
Created on Fri Aug 30 13:29:56 2019

@author: Admin
"""
first=0
second=1
inp=input("Enter terms\n")
a=int(inp)
i=0
while (i<=a):
    n=0
    if (i<=1):
        n=i
    else:
        n=first+second
        first=second
        second=n
    print(n, "\t , ")
