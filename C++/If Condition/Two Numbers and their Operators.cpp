/*Write a program that prompts the user for two numbers.
The program then prompts the user for the operator (+, - , * , / or %).
The user is the given the answer depending on the operator entered.
If he enters an invalid operator, he/she should get an error message.
*/
#include <iostream>
using namespace std;
int main(void)
{
    float num1, num2, result;
    char sign;
    cout<<"Enter two integers:";
    cin>>num1>>num2;
    cout<<"\nEnter an operator:";
    cin>>sign;
    if (sign=='+'){
        result=num1+num2;
        cout<<num1<<sign<<num2<<" = "<<result;
    }
    else if (sign=='-'){
        result=num1-num2;
        cout<<num1<<sign<<num2<<" = "<<result;
    }
    else if (sign=='*'){
        result=num1*num2;
        cout<<num1<<sign<<num2<<" = "<<result;
    }
    else if (sign=='/'){
        result=num1/num2;
        cout<<num1<<sign<<num2<<" = "<<result;
    }
    else {
        cout<<"Enter a valid mathematical operator";
    }
    return 0;
}
