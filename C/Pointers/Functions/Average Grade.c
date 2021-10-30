/*A program is required that accepts marks in three subjects and calculates the average mark.
The program then assigns the student a grade based on the average mark using the grading system below.
Average Mark	Grade
80 – 100	    A
70 – 80	        B
60 – 70	        C
50 – 60	        D
0 – 50	        E
Write a program with a function called grade which accepts the average mark and prints the grade.
*/
#include <stdio.h>
int grade(int average);
int main()
{
    int sub1, sub2, sub3,average;
    printf("Enter the subject marks\n");
    scanf("%d%d%d", &sub1, &sub2,&sub3);
    average=(sub1+sub2+sub3)/3;
    printf("The student got an average of %d", average);
    grade(average);
    return 0;

}
int grade(int aver)
{
    if ((aver>=80) && (aver<=100))
        printf("\nThe student got grade A");
    else if ((aver>=70) && (aver<=79))
        printf("\nThe student got grade B");
    else if ((aver>=60) && (aver<=69))
        printf("\nThe student got grade C");
    else if ((aver>=50) && (aver<=59))
        printf("\nThe student got grade D");
    else if ((aver>=0) && (aver<=49))
        printf("\nThe student got grade E");
}
