#include <iostream>

using namespace std;

struct node{

            string name;

            string course;

            node* next;

            node* prev;



            };



class list{

public:

        static node* newnode();

        //static void node* searchnode();

        static node* deletenode();

        static node* display();

private:

        static node* firstnode;

        static node* lastnode;

};node* list::newnode()

{

node* nodehold;

nodehold = new node;

cout << endl << "Enter the Name:";

cin >> nodehold->name;

cout << endl << "Enter the Cource:";

cin >> nodehold->course;



if(firstnode == NULL)

    {

        firstnode = nodehold;

        lastnode = nodehold;



        nodehold->next = NULL;

        nodehold->prev = NULL;



        return nodehold;

    }

if(firstnode != NULL)

    {

        nodehold->next = lastnode;
    nodehold->prev = NULL;

        return nodehold;

    }

}

node* list::deletenode()

{

node *nodehold;

nodehold = firstnode;

firstnode = firstnode->next;

delete nodehold;

return 0;

}

//node* list::searchnode()

//{

//

//}

node* list::display()

{

    node* nodehold;

    if(firstnode == NULL)

    {

        cout << endl << "There are no nodes in list";

        return 0;

    }

    else

    {

        nodehold = firstnode;

        while(nodehold != NULL)

        {

            cout << endl <<"Name:"<< nodehold->name << "\tCourse:" << nodehold->course;
            nodehold=nodehold->next;

        }

        cout << endl << "End of list";

    }

}
