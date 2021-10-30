#include <iostream>
using namespace std;
double Temp(float farenheit);
int main()

{
    long double fahr=0, Fahr;
    int count=0;
    cout<<"Farenheit\t\t\tCelcius\n";
    for (count=0; count<=15; ++count){
        cout<<fahr<<"\t\t\t\t"<<Fahr<<"\n";
        fahr=fahr+20;
        Fahr=Temp(fahr);
        }
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);

    return 0;
}
double Temp(float farenheit)
{
    double celcius;
    celcius=(farenheit-32)*5/9;
    return celcius;
}
