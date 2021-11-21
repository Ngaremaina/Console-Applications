#include <iostream>
using namespace std;
int main()
{
    char input;
    bool result;
    bool result1;
    bool result2;
    cout<<"Enter a character\n";
    cin>>input;
    result=isdigit(input);
    if (result==true)
        cout<<input<<" is an integer";
    else
    {
        result1=isupper(input);
        result2=islower(input);
        if ((result1==true) || (result2==true))
            cout<<input<<" is a letter";
        else
            cout<<input<<" is a special character";
    }
    return 0;
}
