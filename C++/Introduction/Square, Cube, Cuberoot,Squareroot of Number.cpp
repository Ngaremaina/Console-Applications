/*Write a program that accepts a number and then outputs it’s square, cube, square root and cube root.*/
#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    double integer, square, cube, squareroot, cuberoot;
    cout<<"Enter integer\n";
    cin>>integer;\
    square=pow(integer, 2);
    cube=pow(integer,3);
    squareroot=sqrt(integer);
    cuberoot=cbrt(integer);
    cout<<"The square is "<<square;
    cout<<"\nThe cube is "<<cube;
    cout<<"\nThe square root is "<<squareroot;
    cout<<"\nThe cube root is "<<cuberoot;
    return 0;
}
