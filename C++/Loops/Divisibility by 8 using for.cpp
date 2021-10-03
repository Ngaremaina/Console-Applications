/*Write a program that displays all numbers divisible by 8 between 1 and 200 using for… loop*/
#include <iostream>
using namespace std;
int main()
{
    int number;
    for (number=0; number<=200; ++number){
        if (number%8==0){
        cout<<number<<", ";
        }
        }
    return 0;
}
