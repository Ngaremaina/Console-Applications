#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <stdbool.h>
struct node
{
    char num[50];                        //Data of the node
    struct node *nextptr;           //Address of the next node
    struct node * preptr;

}*stnode, *ennode;

pthread_t tid[50];
int counter;
pthread_mutex_t lock;

void createNodeList(int n); // function to create the list
void displayList(int m);         // function to display the list
void DlListcreation(int n);
void DlListDeleteFirstNode();
void DlListDeleteLastNode();
void DlListDeleteAnyNode(int pos);
void DlLinsertNodeAtEnd(char num[50]);

void *dosth(void *args){
    pthread_mutex_lock(&lock);//lock mutex
    unsigned long i=0;
    counter+=1;
    for (i=0; i<(0xFFFFFFF);i++);
    pthread_mutex_unlock(&lock);//unlock mutex
    return NULL;
}

int main()
{
    int n,insPlc,a,i=1,err,input;
    char num[50];
    printf("\n\n Linked List : To create and display Singly Linked List :\n");
    printf("-------------------------------------------------------------\n");
    bool proceed=false;
    if (pthread_mutex_init(&lock, NULL)!=0){
        printf("\nMutex init failed\n");
        return 1;
    }
    while (i<=50){
        err=pthread_create(&(tid[i]), NULL, &dosth, NULL);
        if (err!=0)
            printf("\ncan't create thread:[%s]", strerror(err));
             printf("Capturing and Storing student details\n");
        do{
            printf("1.Input\n2.Display\n3.Delete\n4.Add\n5.Exit\nEnter your choice -> ");
            scanf("%d", &input);
            if (input==1){
                printf(" Input the number of nodes : ");
                scanf("%d", &n);
                DlListcreation(n);
                a=1;
                displayList(a);
            }
            else if (input==2){
                printf("\n Data entered in the list : \n");
                a=1;
                displayList(a);
            }
            else if (input==3){
                printf(" Input the position ( 1 to %d ) to delete a node : ",n);
                scanf("%d", &insPlc);

                if(insPlc<1 || insPlc>n)
                    {
                     printf("\n Invalid position. Try again.\n ");
                    }
                      if(insPlc>=1 && insPlc<=n)
                  {

                DlListDeleteAnyNode(insPlc);
                    a=2;
                displayList(a);
                  }
            }
            else if (input==4){
                printf(" Input data for the last node : ");
                scanf("%s", num);
                DlLinsertNodeAtEnd(num);
                a=3;
                displayList(a);
            }
            else if (input==5){
                break;
            }
            else {printf("Invalid");}
            }
        while(true);

    }
    return 0;
}


void DlListcreation(int n)
{
    int i;
    char num[50];
    struct node *fnNode;

    if(n >= 1)
    {
        stnode = (struct node *)malloc(sizeof(struct node));

        if(stnode != NULL)
        {
            printf(" Input data for node 1 : "); // assigning data in the first node
            scanf("%s", num);
            strcpy(stnode->num, num);
            //stnode->num = num;
            stnode->preptr = NULL;
            stnode->nextptr = NULL;
            ennode = stnode;
            for(i=2; i<=n; i++)
            {
                fnNode = (struct node *)malloc(sizeof(struct node));
                if(fnNode != NULL)
                {
                    printf(" Input data for node %d : ", i);
                    scanf("%s", num);
                    strcpy(fnNode->num, num);
                    //fnNode->num = num;
                    fnNode->preptr = ennode;    // new node is linking with the previous node
                    fnNode->nextptr = NULL;     // set next address of fnnode is NULL
                    ennode->nextptr = fnNode;   // previous node is linking with the new node
                    ennode = fnNode;            // assign new node as last node
                }
                else
                {
                    printf(" Memory can not be allocated.");
                    break;
                }
            }
        }
        else
        {
            printf(" Memory can not be allocated.");
        }
    }
}
void displayList(int m)
{
    struct node * tmp;
    int n = 1;
    if(stnode == NULL)
    {
        printf(" No data found in the List yet.");
    }
    else
    {
        tmp = stnode;
        if (m==1)
        {
        printf("\n Data entered in the list are :\n");
        }
        else
        {
         printf("\n After insertion the new list are :\n");
        }
        while(tmp != NULL)
        {
            printf(" node %d : %s\n", n, tmp->num);
            n++;
            tmp = tmp->nextptr; // current pointer moves to the next node
        }
    }

}

void DlListDeleteAnyNode(int pos)
{
    struct node *curNode;
    int i;

    curNode = stnode;
    for(i=1; i<pos && curNode!=NULL; i++)
    {
        curNode = curNode->nextptr;
    }

    if(pos == 1)
    {
        DlListDeleteFirstNode();
    }
    else if(curNode == ennode)
    {
        DlListDeleteLastNode();
    }
    else if(curNode != NULL)
    {
        curNode->preptr->nextptr = curNode->nextptr;
        curNode->nextptr->preptr = curNode->preptr;

        free(curNode); //Delete the n node
    }
    else
    {
        printf(" The given position is invalid!\n");
    }
}

void DlListDeleteFirstNode()
{
    struct node * NodeToDel;
    if(stnode == NULL)
    {
        printf(" Delete is not possible. No data in the list.\n");
    }
    else
    {
        NodeToDel = stnode;

        stnode = stnode->nextptr;   // move the next address of starting node to 2 node
        stnode->preptr = NULL;      // set previous address of staring node is NULL
        free(NodeToDel);            // delete the first node from memory
    }
}

void DlListDeleteLastNode()
{
    struct node * NodeToDel;

    if(ennode == NULL)
    {
        printf(" Delete is not possible. No data in the list.\n");
    }
    else
    {
        NodeToDel = ennode;

        ennode = ennode->preptr;    // move the previous address of the last node to 2nd last node
        ennode->nextptr = NULL;     // set the next address of last node to NULL
        free(NodeToDel);            // delete the last node
    }
}

void DlLinsertNodeAtEnd(char num[50])
{
    struct node * newnode;

    if(ennode == NULL)
    {
        printf(" No data found in the list!\n");
    }
    else
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        strcpy(newnode->num, num);
        //newnode->num = num;
        newnode->nextptr = NULL;        // set next address field of new node  is NULL
        newnode->preptr = ennode;       // previous address of new node is linking with ending node
        ennode->nextptr = newnode;      // next address of ending node is linking with new node
        ennode = newnode;               // set the new node as ending node
    }
}
