/*Write a program that computes the area of either a rectangle, a circle or a right-angled triangle.
The program should display a menu that enables the user to select the type of figure whose area he/she wants to compute.
Depending on the users choice, the program should prompt for the dimensions and perform the computations.
The output should be: - The type of figure, the dimensions and the area.
Define three functions: - one to compute the area of a rectangle, one the area of a circle and one the area of a triangle.
(NB: 1. The calculation should be for only one figure at any one time.
 2. Computations should be done in the user-defined functions.)
*/
#include <iostream>
#include <cmath>
using namespace std;

double area_circle(double radius);
double area_rect(double length, double width);
double area_triangle(double base, double height);

int main()
{
    int choice;
    double radius, area1;
    double length, width, area2;
    double base, height, area3;

    cout<<"Which type of figure do you wish?\n1. Circle\n2. Rectangle\n3. Triangle\n";
    cout<<"Enter your choice -> ";
    cin>>choice;

    if (choice==1){
        cout<<"Enter the radius -> ";
        cin>>radius;
        area1=area_circle(radius);
        cout<<"The area of the circle is "<<area1;
    }

    else if(choice==2){
        cout<<"Enter the length and width -> ";
        cin>>length>>width;
        area2=area_rect(length, width);
        cout<<"The area of the rectangle is "<<area2;}

    else if  (choice==3){
        cout<<"Enter the base and height -> ";
        cin>>base>>height;
        area3=area_triangle(base, height);
        cout<<"The area of the triangle is "<<area3;
    }
    return 0;
}
double area_circle(double radius)
{
    double area;
    area=M_PI*radius*radius;
    return area;
}

double area_rect(double length, double width)
{
    double area;
    area=length*width;
    return area;
}

double area_triangle(double base, double height)
{
    double area;
    area=0.5*base*height;
    return area;
}
