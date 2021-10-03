/*Write a program that computes the area of a right-angled triangle.*/
#include <iostream>
using namespace std;
int main()
{
    float a, b, c, base, height, perimeter, area;
    cout<<"Enter a, b, c\n";
    cin>>a>>b>>c;
    perimeter=a+b+c;
    cout<<"The perimeter is "<<perimeter;
    cout<<"\nEnter the base\n";
    cin>>base;
    cout<<"Enter the height\n";
    cin>>height;
    area=0.5*base*height;
    cout<<"The area is "<<area;
    return 0;
}
