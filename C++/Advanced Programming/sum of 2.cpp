#include <iostream>
using namespace std;

int main(){
    int num1, num2, sum;

    cout<<"Enter the integers\n";
    cin>>num1>>num2;

    try{
        sum=num1+num2;
    }
    catch (const char*error)
    {cout<<error<<endl;}

    return 0;
}
