/*Write a program that accepts the radius of a circle
and computes both it’s area and circumference.*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float radius, circumference, area;
    cout<<"Enter the radius\n";
    cin>>radius;
    circumference=2*M_PI*radius;
    area=M_PI*radius*radius;
    cout<<"The circumference is "<<circumference<<" and the area is "<<area;
    return 0;
}
