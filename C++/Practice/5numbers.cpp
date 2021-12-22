#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num1, num2, num3, num4, num5, sum , average;
    cout<<"Enter the numbers\n";
    cin>>num1>>num2>>num3>>num4>>num5;

    sum=num1+num2+num3+num4+num5;
    average=sum/5;

    cout<<"The sum is "<<sum<<" and average is "<<average;
    return 0;
}
