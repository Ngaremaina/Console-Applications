#include <iostream>
using namespace std;
int main()
{
    char input, result1, result3;
    bool result;
    bool result2;
    cout<<"Enter a character\n";
    cin>>input;
    result=islower(input);

    if (result==true){
        result1=toupper(input);
        cout<<input<<" in upper case is "<<result1;
    }

    else {
            result2=isupper(input);
            if (result2==true){
                result3=tolower(input);
                cout<<input<<" in lower case is "<<result3;
            }

            else
                cout<<input<<" is not a letter";
        }

    return 0;
}
