/*A program is required that computes the square and cube of all numbers between 2 and 10
and display them using a loop. The output should take the following format.
      Number      Square          Cube
           2                4                   8
           3                9                 27
          …
         10            100              1000
      Write the program using for… loop
NB: The program has no input.

*/
#include <iostream>
using namespace std;
#include <cmath>
int main()
{
     float number, square, cube, forth;
    cout<<"Number\t\t\tSquare\t\t\tCube\t\t\tForth\n";

    for (number=2; number<=10;++number)
    {
        square=pow(number, 2);
        cube=pow(number,3);
        forth=pow(number, 4);
        cout<<number<<"\t\t\t"<<square<<"\t\t\t"<<cube<<"\t\t\t"<<forth<<"\n";
    }
    return 0;
}
