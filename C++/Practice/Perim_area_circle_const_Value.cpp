#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.1415;
int main()
{
    float radius, circumference, area;
    cout<<"Enter the radius\n";
    cin>>radius;
    circumference=2*PI*radius;
    area=PI*radius*radius;
    cout<<"The circumference is "<<circumference<<" and the area is "<<area;
    return 0;
}
