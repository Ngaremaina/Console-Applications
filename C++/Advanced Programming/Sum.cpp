#include <iostream>
using namespace std;

class Sum{
private:
    int num1, num2, sum;
public:
        void compute();
        void display();
        void input();
};
void Sum::input(){
    cout<<"Enter number 1\n";
    cin>>num1;
    cout<<"Enter number 2\n";
    cin>>num2;

}
void Sum::compute(){
    sum=num1+num2;
}
void Sum::display(){
    cout<<"Sum is "<<sum;
}
int main()
{
   Sum sm;
   sm.input();
   sm.compute();
   sm.display();

   return 0;
}
