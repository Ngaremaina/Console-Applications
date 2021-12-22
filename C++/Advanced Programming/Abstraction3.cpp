#include <iostream>
using namespace std;

class Abstraction2{
    private: int num; char ch;
    public:
        void setmyValue(int n, char c){
            num=n;
            ch=c;
        }
        void getmyValue(){
            cout<<"Numbers is "<<num<<endl;
            cout<<"Character is "<<ch<<endl;
        }
};
int main(){
    Abstraction2 obj;
    obj.setmyValue(100,'x');
    obj.getmyValue();
}
