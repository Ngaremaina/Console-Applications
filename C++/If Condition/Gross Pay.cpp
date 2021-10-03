/*Write a program using the tax information below: -
Gross Pay                  	      Tax Rate
Over 40,000			30%
>= 30,000 but below 40,000	25%
>=20,000 but below 30,000	15%
>=10,000 but below 20,000	10%
Below 10,000			no tax.
Write a program that accepts the gross pay and computes both the tax amount and the net pay. (Assume the net pay is gross pay – tax amount)

*/
#include <iostream>
using namespace std;
int main()
{
    float grosspay, rate, tax, netpay;
    cout<<"Enter your gross pay\n";
    cin>>grosspay;
    if (grosspay>=40000){
        tax=0.3*grosspay;
        netpay=grosspay-tax;
        cout<<"\nNet pay is "<<netpay;
    }
    else if ((grosspay>=30000) && (grosspay<40000)){
        tax=0.25*grosspay;
        netpay=grosspay-tax;
        cout<<"\nNet pay is "<<netpay;
    }
    else if ((grosspay>=20000) && (grosspay<30000)){
        tax=0.15*grosspay;
        netpay=grosspay-tax;
        cout<<"\nNet pay is "<<netpay;
    }
    else if ((grosspay>=10000) && (grosspay<20000)){
        tax=0.1*grosspay;
        netpay=grosspay-tax;
        cout<<"\nNet pay is "<<netpay;
    }
    else{
        cout<<"\nNet pay is "<<grosspay;
    }
    return 0;

}
