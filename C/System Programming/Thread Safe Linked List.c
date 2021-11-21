#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <pthread.h>
#define LARGE 50

struct node *add_to_list(struct node *list, char *n);
struct node{
    char value[LARGE+1];
    struct node *next;
};
struct node *first=NULL;
struct node *second=NULL;
struct node *third=NULL;
struct node *fourth=NULL;
struct node *fifth=NULL;

pthread_t tid[LARGE];
int counter;
pthread_mutex_t lock;

void print(void);

void *dosth(void *args){
    pthread_mutex_lock(&lock);//lock mutex
    unsigned long i=0;
    counter+=1;
    for (i=0; i<(0xFFFFFFF);i++);
    pthread_mutex_unlock(&lock);//unlock mutex
    return NULL;
}
//is list empty
bool isEmpty() {
   return first == NULL;
}
//delete first item
struct node* deleteFirst() {

   //save reference to first link
   struct node *tempLink = first;

   //mark next to first link as first
   first = first->next;

   //return the deleted link
   return tempLink;
}
//delete a link with given key
struct node* delete(char value) {

   //start from the first link
   struct node* current = first;
   struct node* previous = NULL;

   //if list is empty
   if(first == NULL) {
      return NULL;
   }

   //navigate through list
   while(current->value != value) {

      //if it is last node
      if(current->next == NULL) {
         return NULL;
      } else {
         //store reference to current link
         previous = current;
         //move to next link
         current = current->next;
      }
   }

   //found a match, update the link
   if(current == first) {
      //change first to point to next link
      first = first->next;
   } else {
      //bypass the current link
      previous->next = current->next;
   }

   return current;
}

int main(void)
{
    char name[LARGE], meal[LARGE], hobby[LARGE], height[LARGE], complexion[LARGE];
    char *p,*q,*r,*s,*t, choice, value;
    int i=1, err, members;
    int input;
    bool proceed=false;
    if (pthread_mutex_init(&lock, NULL)!=0){
        printf("\nMutex init failed\n");
        return 1;
    }
    printf("Capturing and Storing student details\n");
    do{
        printf("1.Input\n2.Display\n3.Delete\n4.Exit\nEnter your choice -> ");
        scanf("%d", &input);
    if (input==1){
            printf("Enter the number of members in the group -> ");
            scanf("%d", &members);
            while (i<=members){
                err=pthread_create(&(tid[i]), NULL, &dosth, NULL);
                if (err!=0)
                    printf("\ncan't create thread:[%s]", strerror(err));
                printf("Enter the details for Student %d\n",i);
                printf("Name: ");
                scanf("%s", name);
                printf("Favorite food: ");
                scanf("%s", meal);
                printf("Favorite hobby: ");
                scanf("%s", hobby);
                printf("Height: ");
                scanf("%s", height);
                printf("Skin complexion: ");
                scanf("%s", complexion);
                 i++;
    }
    //adding the variables to the pointers
    p=&name[0];
    q=&meal[0];
    r=&hobby[0];
    s=&height[0];
    t=&complexion[0];
    //Adding the values to the list using the function add_to_list
    first=add_to_list(first,p);
    second=add_to_list(second,q);
    third=add_to_list(third,r);
    fourth=add_to_list(fourth, s);
    fifth=add_to_list(fifth, t);

    pthread_join(tid[members],NULL);

    }
    else if (input==2){
        print();
    }
    else if (input==3){
        printf("Enter value to be deleted -> ");
        scanf("%s", value);
        if (value==p || value==q)
            delete(value);
       /* while(!isEmpty()) {
      struct node *temp = deleteFirst();
      printf("\nDeleted value:");
      printf("%s",temp->value);
   }*/

    }
    else if (input==4){
        break;
    }
    else
        printf("Invalid. Please try again");
    }
    while(true);


    pthread_mutex_destroy(&lock);

    return 0;
}
//insert link at the first location
struct node *add_to_list(struct node *list, char *n)
{
    struct node *new_node;
    new_node=malloc(sizeof(struct node));
    if (new_node==NULL){
        printf("Error: malloc failed in add_to_list\n");
        exit(EXIT_FAILURE);

    }
    strcpy(new_node->value, n);
    new_node->next=list;
    return new_node;
};
//display the list
void print(void){

    struct node *fir_node;
    struct node *sec_node;
    struct node *thi_node;
    struct node *fou_node;
    struct node *fif_node;

    fir_node=first;
    sec_node=second;
    thi_node=third;
    fou_node=fourth;
    fif_node=fifth;

    while (fir_node!=NULL){
    printf("\nYour name is %s", fir_node->value);
    fir_node=fir_node->next;
   }
   while (sec_node!=NULL){
        printf("\nYour favorite food is %s", sec_node->value);
        sec_node=sec_node->next;
   }
   while (thi_node!=NULL){
        printf("\nYour favorite hobby is %s", thi_node->value);
        thi_node=thi_node->next;
   }
   while (fou_node!=NULL){
        printf("\nYour height is %s", fou_node->value);
        fou_node=fou_node->next;
   }
   while (fif_node!=NULL){
        printf("\nYour skin complexion is %s\n", fif_node->value);
        fif_node=fif_node->next;
   }

}


