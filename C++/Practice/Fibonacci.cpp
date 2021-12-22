#include<iostream>
using namespace std;
int Fibonacci(int n, int c, int first, int second, int next);
int main()
{
	int n, c, first=0, second=1, next, result;

    cout<<"Enter the number of terms\n";
    cin>>n;

    result=Fibonacci(n, c, first, second, next);


	cout<<n<<", "<<result<<"\t";
	return 0;
}

int Fibonacci(int n, int c, int first, int second, int next)
{
    for (c=0; c<n; c++){
        if (c<=1)
            next=c;
        else{

            next=first + second;
            first=second;
            second= next;
            }return next;

}}
