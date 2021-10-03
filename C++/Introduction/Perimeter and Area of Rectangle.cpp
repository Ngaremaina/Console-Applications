/*Write a program that accepts the width and length of a rectangle
and computes both it’s area and perimeter.*/
#include <iostream>
using namespace std;
int main()
{
    float length, width, perimeter, area;
    cout<<"Enter the length\n";
    cin>>length;
    cout<<"Enter the width\n";
    cin>>width;
    perimeter=2*(length+width);
    area=length*width;
    cout<<"The perimeter is "<<perimeter<<" and the area is "<<area;
    return 0;
}
