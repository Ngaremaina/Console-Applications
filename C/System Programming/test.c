#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#define LARGE 10

struct node *add_to_list(struct node *list, char *n);
struct node{
    char value[LARGE+1];
    char food[LARGE+1];
    struct node *next;
};
struct node *first=NULL;
struct node *second=NULL;
void print(void);
int main(void)
{
    char job[LARGE],meal[LARGE],*p,*q;
    printf("Please enter printing jobs\n");
    scanf("%s", job);
    printf("Enter the second\n");
    scanf("%s", meal);

    p=&job[0];
    q=&meal[0];

    first=add_to_list(first,p);
    second=add_to_list(second,q);

    print();
    return 0;
}
struct node *add_to_list(struct node *list, char *n)
{
    struct node *new_node;
    new_node=malloc(sizeof(struct node));
    if (new_node==NULL){
        printf("Error:malloc failed in add_to_list\n");
        exit(EXIT_FAILURE);

    }
    strcpy(new_node->value, n);
    new_node->next=list;
    return new_node;
};
void print(void){
    struct node *new_node;
    struct node *sec_node;
    new_node=first;
    sec_node=second;

    while(new_node != NULL) {

      printf("(%s)",new_node->value);
      new_node = new_node->next;
   }
   while (sec_node!=NULL){
        printf("%s", sec_node->value);
        sec_node=sec_node->next;
   }
    /*for (new_node=first;new_node!=NULL;new_node=new_node->next){
        printf("%s\n", new_node->value);
    }*/
}
