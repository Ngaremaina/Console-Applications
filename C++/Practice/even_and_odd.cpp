#include <iostream>
using namespace std;
int main()
{
    int i;
    for (i=0; i<=100; ++i)
        {
            if (i%2==0)
                cout<<i<<" is even\t\t";
            else
                cout<<i<<" is odd\n";
        }
    return 0;
}
