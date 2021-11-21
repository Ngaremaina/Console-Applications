#include <iostream>
using namespace std;
struct Rectangle
{
    double width, length;
};
int main()
{
    double perim, area;
    Rectangle rect;
    cout<<"Enter the length\n";
    cin>>rect.length;
    cout<<"Enter the width\n";
    cin>>rect.width;
    area=rect.length*rect.width;
    perim=2*(rect.length+rect.width);
    cout<<"The area is "<<area<<" and the perimeter is "<<perim;
    return 0;

}
