/*A program is required that accepts three integers and finds the smallest.
Write a program with a function called smallest which accepts three integers
entered via the main function and prints them together with the smallest.
*/
#include<iostream>
using namespace std;
float smallest(float a, float b, float c);
int main()
{
    float num1, num2, num3, Small;
    cout<<"Enter the three numbers\n";
    cin>>num1>>num2>>num3;
    Small=smallest(num1, num2, num3);
    cout<<"Between "<<num1<<", "<<num2<<" and "<<num3<<" the smallest is "<<Small;
    return 0;
}
float smallest(float a, float b, float c)
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

