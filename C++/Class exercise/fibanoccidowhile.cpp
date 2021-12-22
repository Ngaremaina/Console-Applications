#include<iostream>
using namespace std ;
int main()
{
    int n,t,t1=-1,t2=1;


    cout<<"  How many Fibanocci terms do you want?";
    cin>>n;

    cout<<"  The Fibonacci Series is:";

    do
    {
        t=t1+t2;
        t1=t2;
        t2=t;
        cout<<"  \n"<<t;
        n--;
    }while(n>0);
    return 0;
}
