#include <stdio.h>
#include <pthread.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>


struct node {
   char data[50];
   //char key[50];
   struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

//display the list
void printList() {
   struct node *ptr = head;
   printf("\n[ ");

   //start from the beginning
   while(ptr != NULL) {
      printf("(%s)",/*ptr->key,*/ptr->data);
      ptr = ptr->next;
   }

   printf(" ]");
}

//insert link at the first location
void insertFirst(char data[]) {
   //create a link
   struct node *link = (struct node*) malloc(sizeof(struct node));

   //link->key[50] = key[50];
   link->data[50] = data[50];

   //point it to old first node
   link->next = head;

   //point first to new first node
   head = link;
}
/*int length() {
   int length = 0;
   struct node *current;

   for(current = head; current != NULL; current = current->next) {
      length++;
   }

   return length;
}*/


void main()
{
    char name[50]="owen ngare";
    char food[50]="uji";
        /*printf("Enter your name\n");
        scanf("%s", &name);*/
    insertFirst("owen");
        /*printf("Enter your favorite food\n");
        scanf("%s", &food);*/
    insertFirst("spaghetti");
    /*for (int i=0;i<3;i++){

    }*/
    printList();
    return 0;

}
