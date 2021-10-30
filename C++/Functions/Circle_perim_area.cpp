/*Write a program that computes both the area and circumference of a circle using functions
*/
#include <iostream>
#include <cmath>
using namespace std;
double area_circle(double radius);
double perim_circle(double radius);
int main()
{
    double radius, perimeter, area;
    cout<<"Enter radius\n";
    cin>>radius;
    area=area_circle(radius);
    perimeter=perim_circle(radius);
    cout<<"The area is "<<area<<" and perimeter is "<<perimeter;
    return 0;
}
double area_circle(double radius)
{
    double area;
    area=M_PI*radius*radius;
    return area;
}
double perim_circle(double radius)
{
    double perimeter;
    perimeter=2*M_PI*radius;
    return perimeter;
}
