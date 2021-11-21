# -*- coding: utf-8 -*-
"""
Created on Sat Jul 13 23:46:35 2019

@author: Admin
"""
import math

def sqroot(d):
    sroot=math.sqrt(d)
    return sroot

while True:
    line=input(">")
    if (line=='n' or 'N'):
        break
    inp=input("Enter integer\n")
    d=float(inp)
    w=sqroot(d)
    print(w)
   