/*Write a program that accepts the weight of a package in grams
and then converts it to kilograms
and also specifies how many such packages form one kilogram.
For example, if the user enters the weight (in grams) of the package as 100, the output should be;
    The weight of the package is 0.1 kilograms.
    It takes 10 such packages to form one kilogram
*/
#include <iostream>
using namespace std;
int main()
{
    float grams, kilograms, packets;
    cout<<"Enter the weight\n";
    cin>>grams;
    kilograms=grams/1000;
    packets=kilograms*100;
    cout<<"\nThe weight of the package is "<<kilograms<<" kilograms.";
    cout<<"\nIt takes "<<packets<<" such packages to form one kilogram.";
    return 0;
}
