/*Write a program that computes the sum of the squares of the first 15 positive integers
and display the results using for… loop.*/
#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    int square, number, count, sum;
    count=0;
    number=1;
    for (number=1; number<=15;++number){
        square=pow(number, 2);
        count=count+1;
        sum=sum+square;

    }

    cout<<"Sum is -> "<<sum;
    return 0;
}
