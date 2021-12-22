#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num1, num2, result;
    cout<<"Enter the integer\n";
    /*integer entered*/
    cin>>num1;
    cout<<"Enter power form\n";
    //power form entry
    cin>>num2;
    result=pow(num1, num2);/*power function used*/
    cout<<"The value is "<<result;
    return 0;
}
