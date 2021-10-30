#include <iostream>
using namespace std;
float grade(float mark1, float mark2, float mark3);
int main()
{
    float sub1, sub2, sub3, aver;

    cout<<"Enter marks\n";
    cin>>sub1>>sub2>>sub3;
    aver=grade(sub1, sub2, sub3);
    if ((aver>=80) && (aver<=100))
        cout<<"\nThe student got grade A";
    else if ((aver>=70) && (aver<=79))
        cout<<"\nThe student got grade B";
    else if ((aver>=60) && (aver<=69))
        cout<<"\nThe student got grade C";
    else if ((aver>=50) && (aver<=59))
        cout<<"\nThe student got grade D";
    else if ((aver>=0) && (aver<=49))
        cout<<"\nThe student got grade E";
    return 0;
}
float grade(float mark1, float mark2, float mark3)
{
    float average;
    average=(mark1+mark2+mark3)/3;
    cout<<"\nThe student got an average of "<<average;

    return average;
}
