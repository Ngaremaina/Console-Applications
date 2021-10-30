#include<iostream>
using namespace std;
int calculate_total(int sum, int n);
int main()
{
    int sum=0, k=20, Sum=0;
    do{
        k=k+1;
        Sum=calculate_total(sum, k);

    }while(k<=30);
    cout<<"The total is "<<Sum;
    return 0;
}
int calculate_total(int sum, int n)
{
    int total;
    total=total+n;
    return total;
}
