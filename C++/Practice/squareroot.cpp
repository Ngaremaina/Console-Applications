#include <iostream>
using namespace std;
#include <algorithm>
int main()
{
    double num1, temp=0;
    double sqt, result;
    cout<<"Enter the integer\n";
    cin>>num1;
    sqt=num1/2;
    while (sqt!=temp){
        temp=sqt;
        sqt=(num1/temp+temp)/2;
            }


        cout<<"The square root of "<<num1<<" is "<<sqt;
    return 0;
}
