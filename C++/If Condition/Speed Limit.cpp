/*Write a program that can be used by a policeman to determine if a vehicle has exceeded the speed limit
and to levy a fine.
The policeman should enter the vehicles speed and the speed limit.
If the speed limit is exceeded by less than 30kph a fine of Kshs. 2500 should be charged.
Otherwise a fine of Kshs 4000 is charged.
Your program should then output (in a suitable format) the vehicle speed, the speed limit,
the excess speed and the fine levied.
*/
#include <iostream>
using namespace std;
int main()
{
    int speed, speedlimit, dif;
    cout<<"Enter the speed of the vehicle\n";
    cin>>speed;
    cout<<"Enter the speed limit\n";
    cin>>speedlimit;
    cout<<"The speed is "<<speed<<" kph";
    cout<<"\nThe speed limit is "<<speedlimit<<" kph";
    dif=speed-speedlimit;
    cout<<"\nThe excess speed is "<<dif<<" kph";
    if (dif<30)
        cout<<"\nFine of Kshs. 2,500";
    else
        cout<<"\nFine of Kshs. 4,000";


    return 0;
}
