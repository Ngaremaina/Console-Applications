/*Write a program that accepts distance traveled in metres and the time taken in minutes
and then outputs the speed in kilometers per hour (km/h).
E.g. if someone enters a distance (in metres) of 500 and a time (in minutes) of 15
the output for speed should be 2 km/h.*/
#include <iostream>
using namespace std;
int main()
{
    float meters, kilometers, minutes, hours, speed;
    cout<<"Enter the distance in meters\n";
    cin>>meters;
    cout<<"Enter the time taken in minutes\n";
    cin>>minutes;
    kilometers=meters/1000;
    hours=minutes/60;
    speed= kilometers/hours;
    cout<<"The speed is "<<speed<<"km/h";
    return 0;
}
