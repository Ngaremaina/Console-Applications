/*Write a program that accepts the age of a person,
if the person is 18 and above, it should print You can vote.
otherwise it should print You are too young to vote.
 */

 #include <stdio.h>

 int main()
 {
     int age;
     int *miaka=&age;

     printf("Enter the age\n");
     scanf("%d", &*miaka);

     if (*miaka<18){
        printf("You are too young");

     }
     else {printf("You can vote");}
     return 0;
 }
