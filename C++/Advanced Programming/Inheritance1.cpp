#include <iostream>
using namespace std;

class Shape{
public:
    void setwidth(int w){width=w;}
    void setheight(int h){height=h;}
protected:
    int width;int height;
};
class PaintCost{
    public: int getCost(int area){
    return area=70;}
};
class Rectangle:public Shape, public PaintCost{
    public:int getArea(){return width*height;}
};
int main(void){
    Rectangle rect;
    int area;
    rect.setwidth(5);
    rect.setheight(7);
    area=rect.getArea();
    //print area of the object

    cout<<"Total area: "<<rect.getArea()<<endl;
    cout<<"Total paint cost: Kshs."<<rect.getCost(area)<<endl;
    return 0;
}
