/*Write a program that computes both the area and circumference of a circle using functions.   */
#include <stdio.h>
#include <math.h>

int circle(int *radius);

int main()
{
    int rad;

    printf("Enter the radius of the circle -> ");
    scanf("%d", &rad);

    circle(&rad);

    return 0;

}
int circle(int *radius)
{
    float area, circumference;

    area=M_PI**radius**radius;
    circumference=2*M_PI**radius;

    printf("The area = %f\n", area);
    printf("The circumference = %f", circumference);
}
