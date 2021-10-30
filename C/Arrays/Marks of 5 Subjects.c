/*Write a program that accepts marks (of type double) in five subjects and stores them in array.
The program should then output the marks along with their sum and average.
*/
#include <stdio.h>

int main()
{
    double marks[5];
    double sum=0;
    double average;

    printf("Enter the subject marks\n");

    for (int n=0;n<=4;n++){
        scanf("%lf", &marks[n]);
        sum+=marks[n];
    }
    average=sum/5;
    printf("The sum = %lf\n", sum);
    printf("The average = %lf", average);
}
