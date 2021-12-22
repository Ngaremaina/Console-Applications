#include <bits/stdc++.h>
using namespace std;

class FunctionOverload{
public: //functional with 1 int parameter
    void func(int x){
        cout<<"Value of x is "<<x<<endl;
    }
    //function with same name but 1 double parameter
    void func(double x){
        cout<<"Value of x is "<<x<<endl;
    }
    //function with same name and 2 int parameters
    void func(int x, int y){
        cout<<"Value of x and y is "<<x<<" , "<<y<<endl;
    }

};
int main(){
     FunctionOverload obj;
    /*which function is called will depend on the parameters passed*/
    obj.func(7);
    obj.func(9.132);
    obj.func(85,64);

}


