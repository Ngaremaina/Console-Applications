/*Write a program that accepts measurements in kilometers
and the converts and displays them in metres.
E.g. if someone enters 0.4 (kilometers)
the output should take the form
    0.4 kilometers = 400 metres.*/
#include <iostream>
using namespace std;
int main()
{
    float meters, kilometers;

    cout<<"Enter the distance: ";
    cin>>meters;

    kilometers=meters/1000;

    cout<<kilometers<<"kilometers = "<<meters<<" meters";
    return 0;
}
