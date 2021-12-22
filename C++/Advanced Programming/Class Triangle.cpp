#include <iostream>
using namespace std;

class Triangle
{
private:
    int a, b, c;
    int area, perimeter;
public:
    void input();
    void calculate();
    void display();
};
void Triangle::input()
{
    cout<<"Enter the length\n";
    cin>>a;
    cout<<"Enter the width\n";
    cin>>b;
    cout<<"Enter the height\n";
    cin>>c;
}
void Triangle::calculate()
{
   area=a*b*c;
   perimeter=a+b+c;
}
void Triangle::display()
{
    cout<<"The area is "<<area<<" and the perimeter is "<<perimeter;
}

int main()
{
    Triangle rect;
    rect.input();
    rect.calculate();
    rect.display();
    return 0;
}
