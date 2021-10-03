/*Write a program to produce the following multiplication table using loops.
*    1    2    3    4    5    6
1    1    2    3    4    5    6
2    2    4    6    8   10 12
3    3    6    9   12  15 18
4    4    8   12  16  20 24
5    5  10   15  20  25 30
*/
#include <iostream>
using namespace std;
int main()
{

    int j, i, n, k, num;
    cout<<"Enter the integer\n";
    cin>>num;
    cout<<"\tMultiplication table\n";
    for (i=1; i<=num; ++i){
        cout<<i;
        for (j=1; j<=num; ++j){

            cout<<"\t"<<i*j;
    }
        cout<<"\n";

}


    return 0;
}


