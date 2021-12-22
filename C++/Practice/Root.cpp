#include <iostream>
using namespace std;
int main()
{
    float num1, num2,temp=0, root;
    cout<<"Enter the integer\n";
    cin>>num1;
    cout<<"Enter the root form\n";
    cin>>num2;
    root=num1/num2;
    while (root!=temp){
        temp=root;
        root=(num1/temp+temp)/root;


    }
    cout<<root;
    return 0;
}
