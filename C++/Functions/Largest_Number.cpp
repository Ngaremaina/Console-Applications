/*Write a program that accepts 3 floating-point numbers and outputs the biggest.
The program should make use of a (user-defined) function called get_big,
which accepts the three numbers entered from main and then returns the biggest.
The main function should then output the three numbers entered together with the biggest
*/
#include<iostream>
using namespace std;
float get_big(float a, float b, float c);
int main()
{
    float num1, num2, num3, large;
    cout<<"Enter the three numbers\n";
    cin>>num1>>num2>>num3;
    large=get_big(num1, num2, num3);
    cout<<"Between "<<num1<<", "<<num2<<" and "<<num3<<" the largest is "<<large;
    return 0;
}
float get_big(float a, float b, float c)
{
    float largest;
    if(a > b && a > c)
		largest = a;
	else if(b > a && b > c)
		largest = b;
	else
		largest = c;
    return largest;
}

