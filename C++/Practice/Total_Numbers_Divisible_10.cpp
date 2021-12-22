#include <iostream>
using namespace std;
int main()
{
    int total=0, value, a;
    cout<<"Enter numbers\n";
    cin>>value;
    while (value>0){
        a=value%10;
        value=value/10;
        total=total+a;

    }
    total=total + value;

    cout<<"Sum of digits is "<<total;
    return 0;

}
