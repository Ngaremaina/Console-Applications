#include <iostream>
using namespace std;
int main()
{
    int j, i, n, k, num;
    cout<<"Enter the integer\n";
    cin>>num;
    for (i=1; i<=num; ++i){
        cout<<i;
        for (j=1; j<=num; ++j){
            cout<<"\t"<<i*j;
    }
      cout<<"\n";
}
    return 0;
}


