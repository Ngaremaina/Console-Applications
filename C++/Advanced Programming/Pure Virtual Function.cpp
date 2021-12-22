#include <iostream>
using namespace std;
class Base
{
    public:
    virtual void show() = 0;  //pure virtual function
};
class Derived : public Base
{
    public:
    void show()
    {
        std::cout << "Derived class is derived from the base class." << std::endl;
    }
};
int main()
{
    Base *bptr;//pointer of base class
    Derived d;//object of derived class
    bptr = &d;
    bptr->show();
    return 0;
}
