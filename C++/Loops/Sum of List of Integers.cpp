/*Write a program that accepts a list of integers and computes their sum.
The program should allow the user to enter any number of integers but
an input of zero should terminate the list.
For example if the user enters 2 5 6 12 8 2 0 the sum should be 35.
If he/she enters 2 4 5 0 the sum should be 11 and if he enters 5 4 6 0 12 43 2
the sum should 15 i.e. only numbers before zero are summed.
The rest are ignored and the program terminated.*/
#include <iostream>
using namespace std;
int main()
{
    int count, values, elements, sum;
    count=0;
    sum=0;
    cout<<"Enter the number of elements -> ";
    cin>>elements;
    cout<<"Enter your values\n";
    cin>>values;
    do
    {
        count=count + 1;
        sum=sum+values;

    }while (++count<=elements);


    cout<<sum;

    return 0;

}


