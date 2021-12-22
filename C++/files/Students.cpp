#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

struct Node {
   string data;
   struct Node* next;
   struct Node* prev;
};

class Students{
private:
    char names;

public:
    void readfile();
    void insert_front(struct Node** head, int new_data);
    void insert_After(struct Node* prev, int new_data);
    void insert_end(struct Node** head, int new_data);
    void traverse(struct Node** head, int new_data);

};

void Students::readfile(){
    ifstream data;

    data.open("input.txt");

    if(!data){
        cout << "Error: file could not be opened" << endl;
        exit(1);
    }
    else {
		while (1) {
			data >> names;
			if (data.eof())
				break;


		}

		cout<<"\n";
	}

   data.close();
   cout << "End of file reached.." << endl;

}

void Students::insert_front(struct Node** head, int new_data)
{

   struct Node* newNode = new Node;
   newNode->data = new_data;
   newNode->next = (*head);
   newNode->prev = NULL;
   if ((*head) != NULL)
   (*head)->prev = newNode;
   (*head) = newNode;
}
void Students::insert_After(struct Node* prev, char data)
{

   if (prev == NULL) {
   cout<<"Previous node is required , it cannot be NULL";
   return;
}

   struct Node* newNode = new Node;
   newNode->data = new_data;
   newNode->next = prev->next;
   prev->next = newNode;
   newNode->prev = prev;
   if (newNode->next != NULL)
   newNode->next->prev = newNode;
}
void Students::insert_end(struct Node** head, int new_data)
{
   struct Node* newNode = new Node;
   struct Node* last = *head;
   newNode->data = new_data;
   newNode->next = NULL;
   if (*head == NULL) {
   newNode->prev = NULL;
   *head = newNode;
    return;
}
while (last->next != NULL)
    last = last->next;
    last->next = newNode;
    newNode->prev = last;
    return;

}

int main(){
    Students stud;
    char name;
    struct Node** head;
    struct Node** tail;
    if (!head){


    }
    else if(strcmp(data, head->name)<0){

    }
    else if(strcmp(data, tail->name)>0){

    }
    else{}
    stud.readfile();
    stud.insert_After();
    stud.insert_front();
    return 0;

}
