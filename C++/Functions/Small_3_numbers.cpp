/*A program is required that accepts three integers and finds the smallest.
Write a program with a function called small which accepts the three integers
entered via the main function and returns the smallest.
The main function should output the three numbers entered together with the smallest.
*/
#include<iostream>
using namespace std;
float small(float a, float b, float c);
int main()
{
    float num1, num2, num3, Small;
    cout<<"Enter the three numbers\n";
    cin>>num1>>num2>>num3;
    Small=small(num1, num2, num3);
    cout<<"Between "<<num1<<", "<<num2<<" and "<<num3<<" the smallest is "<<Small;
    return 0;
}
float small(float a, float b, float c)
{
    float smallest;
    if(a < b && a < c)
		smallest = a;
	else if(b < a && b < c)
		smallest = b;
	else
		smallest = c;
    return smallest;
}

