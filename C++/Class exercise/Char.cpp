#include <iostream>
using namespace std;
#include <cstring>
int main()
{
    char sentence[100];
    char sentence1[100];

    int len;
    cout<<"Enter a sentence\n";

    cin.get(sentence, 100);
    strcat(sentence,sentence1);
    len=strlen(sentence);

    cout<<len;
    return 0;
}
