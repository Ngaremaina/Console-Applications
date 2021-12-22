#include <iostream>
using namespace std;
int main()
{
    int number, i,average,j;
    char fname[20];
    cout<<"Enter number\n";
    cin>>number;

    for (i=1; i<=number;++i)
    {
         cout<<"Name\t\t\tAverage\n";
        cout<<i<<"\t"<<fname<<"\t\t\t"<<average;

        cout<<"\nEnter the name of the student\n";
        cin>>fname;
        cout<<"Enter the average\n";
        cin>>average;
    }


    return 0;
}
