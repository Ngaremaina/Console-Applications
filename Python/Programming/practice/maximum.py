# -*- coding: utf-8 -*-
"""
Created on Thu Aug 29 14:07:39 2019

@author: Admin
"""
inp=input("Enter array")
i=float(inp)
i=0
large=max(a[i])
small=min(a[i])
while i<n:
    print(a[i])
    n=n+1
    if (a[i]>large):
        large=a[i]
    if (a[i]<small):
        small=a[i]
large=small=a[0]  

    
print(large)
print(small)