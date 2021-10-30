/*Write a program that accepts the noon temperature in degrees Celsius for each day of the week
and then reports the weeks average temperature as well as the hottest and the coolest days.
*/
#include <stdio.h>
int main()
{
    int temp[7];
    int sum=0;
    float average;
    printf("Enter the temperature values\n");
    for (int n=0;n<6;n++){
        scanf("%d", &temp[n]);
        sum+=temp[n];
    }
    average=sum/7;
    printf("The average = %f", average);
    return 0;
}
