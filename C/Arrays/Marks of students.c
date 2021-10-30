/*Write a program that accepts a set of marks and then computes the average mark,
counts the number of failing (Those below 50) and passing marks (>=50)
and also gets the highest and the lowest marks.
NB: The user should decide how many marks he/she wants to work with.
*/
#include <stdio.h>

int main()
{
    int arr[100];
    int elements,n,sum=0;
    int count50=0, count=0;
    float average;

    printf("Enter the number of marks\n");
    scanf("%d", &elements);

    printf("Enter the marks\n");

    for (n=0;n<elements;n++){
        scanf("%d", &arr[n]);
        sum+=arr[n];

        if (arr[n]<50){
            count50++;
        }
        else {
            count++;
        }
    }
    average=sum/elements;
    printf("The average = %f\n",average);
    printf("The number of students greater than 50 = %d\n", count);
    printf("The number of students less than 50 = %d\n", count50);
    return 0;
}
