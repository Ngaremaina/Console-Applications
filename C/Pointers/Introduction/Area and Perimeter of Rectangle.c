/*Write a program that accepts the width and length of a rectangle
and computes both it’s area and perimeter.*/
#include <stdio.h>

int main()
{
    int length, width,perimeter, area;
    int *len=&length;
    int *wid=&width;

    printf("Enter the length\n");
    scanf("%d", &*len);

    printf("Enter the width\n");
    scanf("%d", &*wid);

    area=*len**wid;
    perimeter=2*(*len+*wid);

    printf("The area = %d\n", area);
    printf("The perimeter = %d", perimeter);

    return 0;
}
