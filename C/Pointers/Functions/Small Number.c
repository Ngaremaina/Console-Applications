/*A program is required that accepts three integers and finds the smallest.
Write a program with a function called small which accepts the three integers
entered via the main function and returns the smallest.
The main function should output the three numbers entered together with the smallest.
*/
#include <stdio.h>
int small(int num1, int num2, int num3);
int main()
{
    int a, b, c;
    printf("Enter the numbers\n");
    scanf("%d%d%d", &a,&b,&c);

    printf("The values %d %d %d ", a, b, c);
    printf("The smallest value is %d", small(a,b,c));

    return 0;
}
int small(int num1, int num2, int num3)
{
    int smallest;
    if (num1<num2 && num1<num2){
        smallest=num1;
    }
    else if (num2<num1 && num2<num3){
        smallest=num2;
    }
    else if (num3<num1 && num3<num2){
        smallest=num3;
    }
}
