#include <iostream>
using namespace std;

class calculator{
    float a,b,sum,quotient;
public:
    void get();
    void addition();
    void division();

};
inline void calculator::get()
{
    cout<<"Enter the first value:";
    cin>>a;
    cout<<"Enter the second value:";
    cin>>b;
}
inline void calculator::addition()
    {
        sum=a+b;
        cout<<"Sum="<<sum<<"\n";
    }
inline void calculator::division()
    {
        quotient=a/b;
        cout<<"Quotient="<<quotient<<"\n";
    }
int main()
{
    cout<<"Program using inline function\n";
    calculator calc;
    calc.get();
    calc.addition();
    calc.division();
    return 0;
}
