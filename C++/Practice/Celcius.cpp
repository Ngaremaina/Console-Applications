#include <iostream>
using namespace std;
int main()
{
    float celcius, farenheit;
    cout<<"Enter the degrees\n";
    cin>>farenheit;
    celcius=(farenheit-32)*5/9;
    cout<<"The degrees in celcius is -> "<<celcius;
    return 0;
}
