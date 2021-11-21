#include <iostream>
using namespace std;
int main()
{
    char input, result1, result2;
    bool result;
    cout<<"Enter a character\n";
    cin>>input;
    result=islower(input);
    if (result==true)
        cout<<input<<" is in lower case";
    else{
        result1=isupper(input);
        if (result1==true)
            cout<<input<<" is in upper case";
        else
             cout<<input<<" is not a letter";
    }

    return 0;
}
