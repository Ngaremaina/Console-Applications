#include<iostream>
using namespace std;
int Fibonacci(int t)
{
    int t1=0, t2=1, t3;
    if(t>0){
         t3 = t1 + t2;
         t1 = t2;
         t2 = t3;
         cout<<t1<<" "<<t3;
         Fibonacci(t-1);
    }
}
int main(){
    int t;
    cout<<"Enter the number of elements: ";
    cin>>t;
    cout<<"Fibonacci Series: ";
    cout<<"0 "<<"1 ";
    Fibonacci(t-2);
     return 0;
}
