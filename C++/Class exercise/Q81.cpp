#include <iostream>
using namespace std;
float calc_tax(float tax, float gross_pay);
int main()
{
    float taxpaid, salary, netpay, Tax;
    cout<<"Enter salary\n";
    cin>>salary;
    if (salary<12000)
        cout<<"You are not eligible to pay tax";
    else{
        Tax=calc_tax(taxpaid, salary);
        netpay=salary-Tax;
        cout<<"The tax is Kshs."<<Tax<<" and the net pay is Kshs."<<netpay;
    }
    return 0;

}
float calc_tax(float tax_rate, float gross_pay)
{
    float tax;
    if ((gross_pay>=12000)&& (gross_pay<20000)){
        tax_rate=0.15;
        tax=tax_rate*gross_pay;
    }
    else if ((gross_pay>=20000)&& (gross_pay<40000)){
        tax_rate=0.25;
        tax=tax_rate*gross_pay;
    }
    else if ((gross_pay>=40000)&& (gross_pay<50000)){
        tax_rate=0.30;
        tax=tax_rate*gross_pay;
    }
    else if (gross_pay>=5000){
        tax_rate=0.35;
        tax=tax_rate*gross_pay;
    }
     return tax;
}
