#include <iostream>
#include <cmath>
#define double M_PI = 3.142
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
