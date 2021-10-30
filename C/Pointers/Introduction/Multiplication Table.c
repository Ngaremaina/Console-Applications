/*
Write a program to produce the following multiplication table using loops.
*    1    2    3    4    5    6
1    1    2    3    4    5    6
2    2    4    6    8   10 12
3    3    6    9   12  15 18
4    4    8   12  16  20 24
5    5  10   15  20  25 30

 */
 #include <stdio.h>

 int main()
 {
     int i,j;
     int *p=&i;
     int *q=&j;

     for (*p=1;*p<=5;*p=*p+1){
        for (*q=1;*q<=6;*q=*q+1){
            printf("%d\t", *p**q);
        }
        printf("\n");
     }
     return 0;
 }
