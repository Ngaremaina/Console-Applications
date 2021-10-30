/*A fibonacci series is defined as follows:-
Fb[0] = 0
Fb[1] = 1
Fb[i] = Fb[i – 1] + fb[i – 2] for i >= 2
Write a program that generates the first n (the user decides how many) fibonacci terms and prints them.
The program should also print their sum. (Use array(s))
*/
#include <stdio.h>
int main()
{
    int fb[100];
    int elements, sum=0;
    float average;

    printf("Enter the number of elements -> ");
    scanf("%d", &elements);

    for (int n=0; n<elements;n++){

        printf("%d\t\n", fb);
        fb[n]=fb[n-1]+fb[n-2];
        sum+=fb[n];
    }
    average=sum/elements;

    printf("The sum = %d\n", sum);
    printf("The average = %f", average);
}
