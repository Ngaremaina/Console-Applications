#include <iostream>
using namespace std;
double get_grade(double sub1, double sub2, double sub3);
int main()
{
    float mark1, mark2, mark3, aver;
    cout<<"Enter the marks\n";
    cin>>mark1>>mark2>>mark3;

    aver=get_grade(mark1, mark2, mark3);
    cout<<"The average is "<<aver;
    return 0;
}
double get_grade(double sub1, double sub2, double sub3)
{
    double average;
    average=(sub1+sub2+sub3)/3;

    if (average>=80 && average<=100)
        cout<<"A";
    else if (average>=70 && average<80)
       cout<<"B";
    else if (average>=60 && average<70)
        cout<<"C";
    else if (average>=50 && average<60)
        cout<<"D";
    else
        cout<<"E";
    return average;
}
