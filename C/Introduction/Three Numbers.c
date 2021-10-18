#include <stdio.h>

int main()
{
    int num1, num2, num3,sum,product;
    float average;

    printf("Enter the numbers\n");
    scanf("%d%d%d", &num1, &num2 ,&num3);

    sum=num1+num2+num3;
    product=num1*num2*num3;
    average = sum/3;

    printf("The sum = %d\n",sum);
    printf("The product = %d\n",product);
    printf("The average = %f\n",average);

}
