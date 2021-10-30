/*Write a program that accepts the radius of a circle and computes both it’s area and circumference.*/
#include <stdio.h>
#include <math.h>

int main()
{
    int radius;
    int *rad=&radius;
    float circumference, area;

    printf("Enter the radius\n");
    scanf("%d", &*rad);

    area=M_PI**rad**rad;
    circumference=2*M_PI**rad;

    printf("The area = %f\n", area);
    printf("The circumference = %f", circumference);

    return 0;
}
