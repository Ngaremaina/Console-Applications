#include <iostream>
using namespace std;
int main()
{
    float salary, netpay, tax;
    cout<<"Enter the salary\n";
    cin>>salary;
    if (salary<10000)
        cout<<"no tax";
    else if (salary>=10000 && salary<20000)
        tax=0.1*salary;
    else if (salary>=20000 && salary<30000)
        tax=0.15*salary;
    else if (salary>=30000 && salary<40000)
        tax=0.25*salary;
    else if (salary>=40000)
        tax=0.3*salary;
    netpay=salary-tax;
    cout<<netpay;
    return 0;
}
