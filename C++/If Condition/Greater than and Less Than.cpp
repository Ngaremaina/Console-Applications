/*Write a program that prompts the user for two numbers and then computes them using the following rules.
If the first number is greater than the second one, the second number is subtracted from the first one.
If the second number is greater than the first one, the first number is divided by the second one.
Otherwise the two numbers are added.
*/
#include <iostream>
using namespace std;
int main()
{
    float num1, num2, sum, difference, division;
    cout<<"Enter the first integer\n";
    cin>>num1;
    cout<<"Enter the second integer\n";
    cin>>num2;
    if (num1<num2){
        division=num1/num2;
        cout<<division;
    }
    else if (num1>num2){
        difference=num2-num1;
        cout<<difference;
    }
    else {
        sum=num1+num2;
        cout<<sum;
    }
    return 0;
}
