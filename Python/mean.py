# -*- coding: utf-8 -*-
"""
Created on Fri Aug  9 15:16:08 2019

@author: Admin
"""

def median_one(lcb, n, cf, f, i):
    middle=lcb+(((n/2)-cf)/f)*i
    return middle
def median_two(lcb, n, cf, f, i):
    middle=lcb+((((n+1)/2)-cf)/f)*i
    return middle