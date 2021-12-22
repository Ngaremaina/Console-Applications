#include <iostream>
using namespace std;

class Rectangle
{
    private:
        int length, width;
        int area, perimeter;
    public:
        void input();
        void calculate();
        void display();
};
void Rectangle::input()
{
    cout<<"Enter the length\n";
    cin>>length;
    cout<<"Enter the width\n";
    cin>>width;
}
void Rectangle::calculate()
{
    area=length*width;
    perimeter=2*(length+width);
}
void Rectangle::display()
{
    cout<<"The area is "<<area<<" and perimeter is "<<perimeter;
}
int main()
{
    Rectangle rect;
    rect.input();
    rect.calculate();
    rect.display();
    return 0;
}
