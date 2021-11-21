#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num1, num2=1, result=1;
    cout<<"Enter the integer\n";
    /*integer entered*/
    cin>>num1;
    cout<<"Enter power form\n";
    //power form entry
    cin>>num2;
    do{
        result=result*num1;

    }while (--num2>0);
    cout<<"The value is "<<result;
    return 0;
}
