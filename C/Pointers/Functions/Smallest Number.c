/*A program is required that accepts three integers and finds the smallest.
Write a program with a function called smallest which accepts three integers
entered via the main function and prints them together with the smallest.
*/
#include <stdio.h>
int smallest(int num1, int num2, int num3);
int main()
{
    int a, b, c;
    printf("Enter the numbers\n");
    scanf("%d%d%d", &a,&b,&c);
    smallest(a,b,c);
}
int smallest(int num1, int num2, int num3)
{
    printf("The values %d %d %d, ",num1, num2, num3);
    if (num1<num2 && num1<num2){
        printf("The smallest number is %d", num1);
    }
    else if (num2<num1 && num2<num3){
        printf("The smallest number is %d", num2);
    }
    else if (num3<num1 && num3<num2){
        printf("The smallest number is %d", num3);
    }
}
