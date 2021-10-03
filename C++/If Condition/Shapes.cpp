/*Write a program that computes the area & perimeter of either a rectangle, a circle or a right-angled triangle.
The program should display a menu that enables the user to select the type of figure whose area
& perimeter he/she wants to compute.
Depending on the users choice, the program should prompt for the dimensions
and perform the computations.
The output should be: - The type of figure, the dimensions,
the area and the perimeter.
(NB:The calculation should be for only one figure at any one time.)
*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int choice;
    float length, width, radius, a, b, c, base, height;
    float perim1, perim2, perim3, area1, area2, area3;
    char answer;
    cout<<"1)Rectangle";
    cout<<"\n2)Circle";
    cout<<"\n3)Triangle";
    cout<<"\nEnter your choice: ";
    cin>>choice;
    if (choice==1){
            cout<<"\nEnter length: ";
            cin>>length;
            cout<<"Enter width: ";
            cin>>width;
            perim1=2 * (length + width);
            area1=length*width;
            cout<<"Perimeter is: "<<perim1;
            cout<<"\nArea is: "<<area1;
    }
    else if (choice==2){
            cout<<"\nEnter radius: ";
            cin>>radius;
            perim2=2*M_PI*radius;
            area2=M_PI*radius*radius;
            cout<<"\nPerimeter is: "<<perim2;
             cout<<"\nArea is: "<<area2;
            }

   else if (choice==3){
            cout<<"Enter base: ";
            cin>>base;
            cout<<"\nEnter height: ";
            cin>>height;
            area3=0.5*base*height;
            perim3=base+height;
            cout<<"\nArea is: "<<area3;
            cout<<"\nPerimeter is: "<<perim3;
            }

    else cout<<"Enter the displayed integer";
    return 0;
}
