# -*- coding: utf-8 -*-
"""
Created on Sat Aug 10 00:43:03 2019

@author: Admin
"""

import	numpy	as	np 
from	sklearn.datasets	
import	load_digits 
import	matplotlib.pyplot	as	plt 
from	sklearn.decomposition	
import	PCA from	sklearn.preprocessing	
import	scale from	sklearn.lda	
import	LDA 
import	matplotlib.cm	as	cm
digits	=	load_digits() 
data	=	digits.data
n_samples,	n_features	=	data.shape 
n_digits	=	len(np.unique(digits.target))
labels	=	digits.target
