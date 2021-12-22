#include <iostream>
using namespace std;
#include <string.h>
int main()
{
    char S1[3]={2,3,4};
    char S2[3];
    char S3[3];
    S3[3]=strcpy(S1, S2);
    cout<<S3;
    return 0;

}
