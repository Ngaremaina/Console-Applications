#include <iostream>
using namespace std;

class Box{double width;
public:
    friend void printWidth(Box box);
    void setwidth(double wid);
};
void Box::setwidth(double wid)
{
    width=wid;
}
void printWidth(Box box){
    cout<<"Width of box:"<<box.width<<endl;
}

int main()
{
    Box box;
    box.setwidth(10.0);
    printWidth(box);
}
