/*Write a program that uses a two dimensional array to compute and display the addition table shown below:
*	1    2	3    4	5    6
1	2    2	3    4	5    6
2	2    4	6    8  10  12
3	3    6	9  12  15  18
4    4    8  12  16  20  24*/

#include <stdio.h>

int main()
{
    int i, j;
    int *p=&i;
    int *q=&j;
    for (*p=0;*p<=4;*p=*p+1){

        for (*q=0;*q<=6;*q=*q+1){

            printf("%d\t", *p+*q);
        }
        printf("\n");
    }

    return 0;
}

