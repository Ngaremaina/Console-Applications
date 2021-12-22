#include <iostream>
using namespace std;
float Temp(float celcius);
int main()
{
    float cel, Fahr;
    cout<<"Enter the degrees\n";
    cin>>cel;
    Fahr=Temp(cel);
    cout<<"The degrees in celcius is -> "<<Fahr;
    return 0;
}
float Temp(float celcius)
{
    float farenheit;
    farenheit=(celcius+32)*9/5;
    return farenheit;
}
