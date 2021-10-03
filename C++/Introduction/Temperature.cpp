/*Write a program that accepts temperature in degrees Celsius
and converts and outputs it in degrees Fahrenheit.*/
#include <iostream>
using namespace std;
int main()
{
    float celcius, farenheit;
    cout<<"The degrees\n";
    cin>>celcius;
    farenheit=((celcius*9)/5)+32;
    cout<<"the degrees is "<<farenheit<<" F";
    return 0;

}
