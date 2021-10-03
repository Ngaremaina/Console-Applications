/*Write a program to read a value from the keyboard and output the phrase NEGATIVE if the number is negative,
POSITIVE if the number is positive or ZERO otherwise.
*/
#include <iostream>
using namespace std;
int main()
{
    float value;
    cout<<"Enter the value: ";
    cin>>value;
    if (value<0){
        cout<<"NEGATIVE";
    }
    else if (value>0){
        cout<<"POSITIVE";
    }
    else {
        cout<<"ZERO";
    }
    return 0;
}
