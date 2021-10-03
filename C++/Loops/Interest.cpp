/*Write a complete program that will read the three values for Deposit, interest rate and number of years
an amount of money is being saved.
Your program should the compute the cumulative compound interest over the given period of years.
NB: Don’t use the formula for calculating compound interest.
Use loops instead.
For example, if the deposit is 10000 and the interest is 10 percent and the money is being saved for ten years,
the output should take the format shown below (including number of decimal places)
Year                      Interest                     Balance
   1                         1000.00                    11000.00
   2                         1100.00	         12100.00
   3                         1210.00                    13310.00
  ….
  10                        2357.94                    25937.42
The compounded interest for 10 years is Kshs. 15937.42
The balance in the account after 10 years at 10.00 percent interest is Kshs. 25937.42

*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int year;
    float deposit, rate, interest, balance;
    cout<<"Year\t\t\tInterest\t\t\tBalance\n";
    deposit=10000;
    rate=0.1;
    year=1;
    cout.setf(ios::fixed);
	//cout.setf(ios::showpoint);
	cout.precision(2);
    for (year=1; year<=10; ++year){
        balance=deposit* pow(1.0 + rate, year);
        interest=balance+deposit;
        cout<<year<<"\t\t\t"<<interest<<"\t\t\t"<<balance<<"\t\t\t\n";
    }

    return 0;

}
