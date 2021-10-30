/*Write a program that uses a two dimensional array to compute and display the addition table shown below:
*	1    2	3    4	 5   6
1	2    2	3    4	 5   6
2	2    4	6    8   10  12
3	3    6	9    12  15  18
4   4    8  12   16  20  24

*/
#include <stdio.h>

int main()
{
    int table[6][4];

    for (int i=0;i<=4;i++){
        for (int j=0;j<=6;j++){
            table[i][j]=i+j;
            printf("%d\t", table[i][j]);
        }
        printf("\n");
    }
    return 0;
}
