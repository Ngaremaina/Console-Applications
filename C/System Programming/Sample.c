#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <pthread.h>
#define LARGE 3

struct node {
   int key;
   struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

//insert link at the first location
void insertFirst(int key) {
   //create a link
   struct node *link = (struct node*) malloc(sizeof(struct node));

   link->key = key;

   //point it to old first node
   link->next = head;

   //point first to new first node
   head = link;
}

//display the list
void printList() {
   struct node *ptr = head;
   printf("\n[ ");

   //start from the beginning
   while(ptr != NULL) {
      printf("(%d) ",ptr->key);
      ptr = ptr->next;
   }

   printf(" ]");
}
void main()
{
   int arr[LARGE]={1,2,3};
   int p=arr[LARGE];


   insertFirst(p);

   printList();

}
