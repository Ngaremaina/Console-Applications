#include <iostream>
using namespace std;

//Base class
class Vehicle{
public:
    string brand="Ford ";
    void honk(){
        cout<<"Tuut, tuut\n";

    }
};
//derived class

class Car:public Vehicle{
public:
    string model="Mustang";
};

int main(){
    Car mycar; mycar.honk();
    cout<<mycar.brand+""+mycar.model;
    return 0;

}
