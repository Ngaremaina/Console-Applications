#include <iostream>
using namespace std;
int main()
{
    int i,j;
    for (i=0; i<=5; ++i){
            for (j=1; j<=i; ++j){
                cout<<"\t"<<j;
            }
        cout<<"\n";
    }
    return 0;
}
