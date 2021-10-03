/*Write a program that accepts two numbers and divides the bigger number by the smaller number
and displays the results.
The program should display an error message
(and not perform the calculation) if the smaller number is zero.
*/
#include <iostream>
using namespace std;
int main()
{
    float num1, num2, division;
    cout<<"Enter the first integer\n";
    cin>>num1;
    cout<<"Enter the second integer\n";
    cin>>num2;
    if (num1>num2){
        division=num1/num2;
        cout<<division;
    }
    else if (num2>num1){
        division=num2/num1;
        cout<<division;
    }
    else if (num1==num2==0){
        cout<<"Enter an integer value";
    }
    return 0;
}
