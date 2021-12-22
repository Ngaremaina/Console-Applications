#include <iostream>
using namespace std;
class Encap2
{
    private:
        int total;public://constructor
        Encap2(int i=0)
        {
            total=i;
        }//interface to an outside world
        void addNum(int number)
        {
            total+=number;
        }
        int getTotal(){
            return total;
        }


};
int main(){
    Encap2 a;
    a.addNum(10);
    a.addNum(20);
    a.addNum(30);
    cout<<"Total "<<a.getTotal();
    return 0;

}

