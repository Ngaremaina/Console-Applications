/*Write a program that accepts a number and prints out it’s reciprocal (1/n).
The program should prevent the user from entering zero by asking the user to enter the value again.
 After being given the answer, the user should be asked if wants to continue by entering ‘c’ to continue
 and ‘x’ to exit.*/
#include <iostream>
using namespace std;
int main()
{
    int number;
    char inp;

    do {
        cout<<"Enter number\n";
        cin>>number;
        cout<<"1/"<<number<<"\n";
        cout<<"Do you wish to continue? c/x\n";
        cin>>inp;
    }while (inp=='c');
    if (inp=='x'){
        cout<<"Thank you";
    }

    return 0;

}
