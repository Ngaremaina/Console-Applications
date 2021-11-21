# -*- coding: utf-8 -*-
"""
Created on Wed Sep  4 12:47:28 2019

@author: Admin
"""

from kivy.app import App 
from kivy.uix.button import Label
class Hello2App(App):
    def build(self):
        return Label()
if __name__=="__main__":
    Hello2App().run() 