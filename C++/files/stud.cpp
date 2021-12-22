#include <iostream>
#include <fstream>
#include<string.h>
using namespace std;
struct Node {
   int data;
   struct Node* next;
   struct Node* prev;
};
class Students{
private:
    char names;
    struct node *first, *last;
public:
    void readfile();

    void sorting();
    void output();
};

void insert_front(struct Node** head, int new_data)
{
   //allocate memory for New node
   struct Node* newNode = new Node;

   //assign data to new node
   newNode->data = new_data;

   //new node is head and previous is null, since we are adding at the front
   newNode->next = (*head);
   newNode->prev = NULL;

   //previous of head is new node
   if ((*head) != NULL)
   (*head)->prev = newNode;

   //head points to new node
   (*head) = newNode;
}
/* Given a node as prev_node, insert a new node after the given node */
void insert_After(struct Node* prev_node, int new_data)
{
   //check if prev node is null
   if (prev_node == NULL) {
   cout<<"Previous node is required , it cannot be NULL";
   return;
}
   //allocate memory for new node
   struct Node* newNode = new Node;

   //assign data to new node
   newNode->data = new_data;

   //set next of newnode to next of prev node
   newNode->next = prev_node->next;

   //set next of prev node to newnode
   prev_node->next = newNode;

   //now set prev of newnode to prev node
   newNode->prev = prev_node;

   //set prev of new node's next to newnode
   if (newNode->next != NULL)
   newNode->next->prev = newNode;
}

//insert a new node at the end of the list
void insert_end(struct Node** head, int new_data)
{
   //allocate memory for node
   struct Node* newNode = new Node;

   struct Node* last = *head; //set last node value to head

   //set data for new node
   newNode->data = new_data;

   //new node is the last node , so set next of new node to null
   newNode->next = NULL;

   //check if list is empty, if yes make new node the head of list
   if (*head == NULL) {
   newNode->prev = NULL;
   *head = newNode;
    return;
}

//otherwise traverse the list to go to last node
while (last->next != NULL)
last = last->next;

//set next of last to new node
last->next = newNode;

//set last to prev of new node
newNode->prev = last;
return;
}

void displayList(struct Node* node) {
   struct Node* last;

   while (node != NULL) {
      cout<<node->data<<"<==>";
      last = node;
      node = node->next;
   }
   if(node == NULL)
   cout<<"NULL";
   }


void Students::sorting(){
    char str[200], ch;
    int i, j, len;
    ifstream data;

    data.open("input.txt");


    while (1) {
        data >> names;
        if (data.eof()){
            gets(str);
            len = strlen(str);
            for(i=0; i<len; i++)
            {
                for(j=0; j<(len-1); j++)
                {
                    if(str[j]>str[j+1])
                    {
                        ch = str[j];
                        str[j] = str[j+1];
                        str[j+1] = ch;
                    }
                }
            }

        }
    }

    cout<<"\n";

    data.close();
}

void Students::readfile(){
    ifstream data;

    data.open("input.txt");

    if(!data){
        cerr << "Error: file could not be opened" << endl;
        exit(1);
    }
    else {
		while (1) {
			data >> names;
			if (data.eof())
				break;
            cout << names <<" ";

		}

		cout<<"\n";
	}

   data.close();
   cout << "End of file reached.." << endl;

}

void Students::output(){
    ofstream data;
    string name;
    data.open("myfile.txt");
    if (!data)
        cout<<"error";
    else {
        while (1){
            cout<<"Enter the name";
            getline(cin, name);
            data << name << endl;
        }
    }
    data.close();
}

int main(){
    Students stud;
    stud.readfile();
    stud.output();
    return 0;

}
