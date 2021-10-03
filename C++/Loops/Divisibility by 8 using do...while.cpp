/*Write a program that displays all numbers divisible by 8 between 1 and 200 using do…while loop*/
#include <iostream>
using namespace std;
int main()
{
    int number;
    number=0;
    do{
        if (number%8==0){
        cout<<number<<", ";}
        }
    while (++number<=200);
    return 0;
}
