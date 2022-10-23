/*
Write a function that computes x
n where x is a floating point number and n is a positive integer. 
The function should check that n is positive. A loop must be used (recall, for example, x
3 = x * x * 
x) as opposed to Math functions. Two sample runs are shown. 
x is 1.3, n is 5    
1.3 raised to the power 5 is: 3.71293 
... and... 
x is 5.6, n is -3
n must be a positive integer*/

#include<iostream>


int main(){
    float x, n, result;

    if (n<0){
        std::cout<<"n must be a positive integer";
    }
    else{
        while (n>0){
        result = x*n;
        std::cout<<result;
    }
    }
    return 0;

    
}