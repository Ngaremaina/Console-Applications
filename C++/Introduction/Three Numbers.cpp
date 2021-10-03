/*Write a program that accepts three numbers and computes their sum, product and average. */
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3, sum, product;
    float division, average;
    cout<<"Enter the integers\n";
    cin>>num1>>num2>>num3;
    sum=num1+num2+num3;
    product=num1*num2*num3;
    average=sum/3;
    cout<<"The sum is "<<sum;
    cout<<"\nThe product is "<<product;
    cout<<"\nThe average is "<<average;
    return 0;
}
