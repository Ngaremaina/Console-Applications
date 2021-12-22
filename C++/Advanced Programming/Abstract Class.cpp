#include <iostream>

using namespace std;
class Rectangle{
private:
    double rect_area;
    double width, length;
public:

    void print();
    void getArea();
    void calculate();
};
void Rectangle::getArea(){
    cout<<"Enter the length\n";
    cin>>length;
    cout<<"Enter the width\n";
    cin>>width;
}
void Rectangle::calculate(){
    rect_area=length*width;
}
void Rectangle::print()
{
    cout<<"The area is "<<rect_area;
}

int main()
{
    Rectangle rect;
    rect.getArea();
    rect.calculate();
    rect.print();

    return 0;
}
