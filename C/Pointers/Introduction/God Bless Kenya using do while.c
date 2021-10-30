/*Write a program that prints God bless Kenya 25 times on the screen using do while
 * NB: The Phrase God Bless Kenya should appear only once in your source code.*/
 #include <stdio.h>

 int main()
 {
     int i=1;
     int *p=&i;

     do{
        printf("God bless Kenya\n");
        *p=*p+1;
     }
     while (*p<=25);
     return 0;
 }
