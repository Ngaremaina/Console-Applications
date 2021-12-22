#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
    struct node *previous;
};
class List{
private:
    struct node *first, *last;
public:

    void additem(int);
    List();

};

List::List(){
    first=NULL;
    last=NULL;
}


void List::additem(int val){
    struct node *current=new node;
    current -> data=val;
    current -> next=NULL;
    current ->previous= NULL;
    if (first==NULL){
        first=current;
        last=current;
    }
    else {
        last -> next=current;
        current->previous=last;
        last=current;
    }
}

int main()
{
    int input;
    char answer;
    List mylist;

    while (answer=='y' || answer=='Y' ){
        cout<<"Enter input\n";
        cin>>input;
        cout<<"Do you wish to continue?y/n";
        cin>>answer;
        mylist.additem(input);
    }

    return 0;

}
