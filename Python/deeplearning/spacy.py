# -*- coding: utf-8 -*-
"""
Created on Thu Jun 23 17:47:35 2022

@author: USER
"""

import spaCy as spacy

nlp = spacy.load('en') #Loads the spacy en model into a python object
doc = nlp(u'I am learning how to build chatbots') #Creates a doc object
for token in doc:
 print(token.text, token.pos_) #prints the text and PO
