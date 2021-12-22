#include <iostream>
using namespace std;
int main()
{
    float num1, num2, num3, num4, sum, product, average;
    cout<<"Enter the integers\n";
    cin>>num1>>num2>>num3>>num4;
    sum=num1+num2+num3+num4;
    product=num1*num2*num3*num4;
    average=sum/4;
    cout<<"The sum is "<<sum;
    cout<<"\nThe product is "<<product;
    cout<<"\nThe average is "<<average;
    return 0;
}
