/*Write a program that accepts the age of a person,
if the person is 18 and above, it should print You can vote.
    otherwise it should print You are too young to vote.*/
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age\n";
    cin>>age;
    if (age>=18){
        cout<<"You can vote\n";
    }
    else cout<<"You are too young to vote";
    return 0;
}
