/*Write a program that accepts measurements in cm and converts them into metres.
If someone enters 200 for example, the output should take the form;
200 cm = 2 metres.
*/
#include <iostream>
using namespace std;
int main()
{
    float meters, length;
    cout<<"Enter the length\n";
    cin>>length;
    meters = (length / 100);
    cout<<length<<" cm = "<<meters<<" meters";
    return 0;
}
