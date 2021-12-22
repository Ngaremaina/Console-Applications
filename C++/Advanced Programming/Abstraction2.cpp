#include <iostream>
using namespace std;

class Box{
    double width;
public:
    friend void printwidth(Box box);
    void setwidth(double wid);};//member function definition
    void Box::setwidth(double wid)
    {
        width=wid;
    }
    void printwidth(Box box){
        cout<<"Width of box:"<<box.width<<endl;
    }
    int main(){
        Box box; //set box width without member function
        box.setwidth(10.0); //use friend function to print the width
        printwidth(box);
        return 0;

    }


