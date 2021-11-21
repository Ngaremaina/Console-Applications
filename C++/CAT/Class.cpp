#include <iostream>
using namespace std;
class Salary
{
private:
    float gross_salary, tax_rate, net_salary;
public:
    Salary(float grosspay, float taxrate, float netpay);
    Sal();
    void input(), output(), compute();
};
int main()
{
    Salary salry(20000, 0.40, 34000);
    Salary Sal();

    salry.input();

    salry.compute();

    salry.output();
    return 0;
}
Salary::Salary(float grosspay, float taxrate, float netpay)
{
    gross_salary=grosspay;
    tax_rate=taxrate;
    net_salary=netpay;
}
Salary::Sal()
{
    float gross_salary=0;
    float tax_rate=0;
    float net_salary=0;
}
void Salary::input()
{
    cout<<"Enter the salary\n";
    cin>>gross_salary;
}
void Salary::compute()
{
    if (gross_salary<10000)
        cout<<"No tax";
    else if (gross_salary>=10000 && gross_salary<20000)
        tax_rate=0.1*gross_salary;
    else if (gross_salary>=20000 && gross_salary<30000)
        tax_rate=0.12*gross_salary;
    else if (gross_salary>=30000)
        tax_rate=0.15*gross_salary;
    net_salary=gross_salary-tax_rate;
}
void Salary::output()
{
    cout<<"The tax is "<<tax_rate<<" and the net pay is "<<net_salary;
}

