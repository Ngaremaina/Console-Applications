#include <iostream>
using namespace std;
int main()
{
    char input;
    cout<<"Enter the category\n";
    cin>>input;
    switch (input)
    {
    case 'G':
        cout<<"Gold member";
        break;
    case 'S':
        cout<<"Silver member";
        break;
    case 'B':
        cout<<"Bronze member";
        break;
    case 'X':
        cout<<"Ordinary member";
    default:
        cout<<"Invalid input";
        break;
    }
    cout<<"\n";
    return 0;

}
