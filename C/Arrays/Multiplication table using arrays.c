/*Using Array(s) write a program that generates the multiplication tables of 1 to 11. No input required.
*/
#include <stdio.h>

int main()
{
    int table[11];

    for (int i=1;i<12;i++){
        for (int j=1;j<12;j++){
            table[j]=i*j;
            printf("%d\t", table[j]);
        }
        printf("\n");
    }

    return 0;
}
