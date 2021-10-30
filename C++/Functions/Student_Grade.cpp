#include <iostream>
using namespace std;
float grade(float mark1, float mark2, float mark3);
int main()
{
    float sub1, sub2, sub3, aver;

    cout<<"Enter marks\n";
    cin>>sub1>>sub2>>sub3;
    aver=grade(sub1, sub2, sub3);

    return 0;
}
float grade(float mark1, float mark2, float mark3)
{
    float average;
    average=(mark1+mark2+mark3)/3;
    cout<<"\nThe student got an average of "<<average;
    if ((average>=80) && (average<=100))
        cout<<"\nThe student got grade A";
    else if ((average>=70) && (average<=79))
        cout<<"\nThe student got grade B";
    else if ((average>=60) && (average<=69))
        cout<<"\nThe student got grade C";
    else if ((average>=50) && (average<=59))
        cout<<"\nThe student got grade D";
    else if ((average>=0) && (average<=49))
        cout<<"\nThe student got grade E";
    return average;
}
