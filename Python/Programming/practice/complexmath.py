# -*- coding: utf-8 -*-
"""
Created on Tue Jul  9 22:09:16 2019
ana
@author: Admin
"""


def mode(lcb, f, g, h, i):
    most=lcb+((f-g)/(2*f-g-h))*i
    return most

inp=input("Enter your choice\na. Mode\nb. Median\n")
choice=str(inp)
if (choice=="a"):
    inp=input("Enter L.C.B\n")
    lcb=float(inp)
    inp=input("Enter f\n")
    f=float(inp)
    inp=input("Enter fa\n")
    g=float(inp)
    inp=input("Enter fb\n")
    h=float(inp)
    inp=input("Enter i\n")
    i=float(inp)
    mf=mode(lcb, f, g, h, i)
    print(mf)



