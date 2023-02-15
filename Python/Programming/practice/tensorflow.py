# -*- coding: utf-8 -*-
"""
Created on Thu Jun 23 15:44:06 2022

@author: USER
"""

import tensorflow as tf
import os
"tf.compact.v1.disable_eager_execution()"

sess=tf.compact.v1.Session()

myGraph=tf.Graph()

with myGraph.as_default():
    variable = tf.Variable(30, name="navin")
    initialize =tf.global_variables_initializer()
    
with tf.compact.v1.Session(graph=myGraph) as sess:
    sess.run(initialize)
    print(sess.run(variable))
    
merged = tf.summary.merge_all(key='summaries')
if not os.path.exists('tensor_board'):
    os.makedirs('tensor_board')

my_writer=tf.summary.FileWriter('D:\Projects\Python\tensor_board', sess.graph)

def TB(cleanup=False):
    import webbrowser
    webbrowser.open('http://41.204.187.5:8080')
    !tensorboard --logdir='D:\Projects\Python\tensor_board'
    
    if cleanup:
        !rm -R tensor_board/
        
        
TB(1)
        
    

    

