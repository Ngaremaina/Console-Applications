/*Write a function definition for a function called even which accepts an integer
and returns 1 to the calling function if the integer is even and 0 if it is odd.
*/
#include <iostream>
using namespace std;
int number(int numb);
int main()
{
   int num, num1;
   cout<<"Enter an integer -> ";
   cin>>num;
   num1=number(num);
   if (num1==0)
        cout<<"1";
    else
        cout<<"0";

   return 0;
}
int number(int numb)
{
    int integer;
    integer=numb%2;
    return integer;
}
