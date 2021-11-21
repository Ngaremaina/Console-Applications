#include <iostream>
#include <fstream>
#include<string.h>

using namespace std;

struct node{
    char data;
    struct node *next;
    struct node *previous;
};

class Student{
private:
    string name;
    struct node *first, *last;
public:
    Student();
    void readfile();
    void inserting(char, char);
    void deleting(char);
    void ascending();
    void descending();
    void output();

};
Student::Student(){
    first=NULL;
    last=NULL;
}
void Student::readfile()
{
    ifstream data;
    data.open("input.txt");
    if(!data){
        cout << "Error: file could not be opened" << endl;
        exit(1);
    }
    else {
		while (1) {
			data >> name;
			if (data.eof())
				break;
		}

		cout<<"\n";
	}

   data.close();
   cout << "End of file reached.." << endl;
}

void Student::descending()
{
    char naming[10][10], onename[10];
    int i, j, n;

    for(i=0; i<n; i++)
        cin>>naming[i];
    for(i=1; i<n; i++)
    {
        for(j=1; j>i; j++)
        {
            if(strcmp(naming[j-1], naming[j])>0)
            {
                strcpy(onename, naming[j]);
                strcpy(naming[j], naming[j-1]);
                strcpy(naming[j-1], onename);
            }
        }
    }

    for(i=0; i<n; i++)
    cout<<naming[i]<<endl;
    cout<<endl;
}
void Student::output()
{
    ofstream data;

    data.open("output.txt");
    if (!data)
        cout<<"error";
    else {
        while (1){
            getline(cin, name);
            data << name << endl;
        }
    }
    data.close();
}
void Student::ascending()
{
    char naming[10][10], onename[10];
    int i, j, n;

    for(i=0; i<n; i++)
    cin>>naming[i];
    for(i=1; i<n; i++)
    {
        for(j=1; j<i; j++)
        {
            if(strcmp(naming[j-1], naming[j])>0)
            {
                strcpy(onename, naming[j-1]);
                strcpy(naming[j-1], naming[j]);
                strcpy(naming[j], onename);
            }
        }
    }

    for(i=0; i<n; i++)
        cout<<naming[i]<<endl;
    cout<<endl;
}
void Student::inserting(char after, char val){
    node *new_node = new node;
    new_node -> data=val;
    new_node -> next=NULL;
    node *curr=NULL;
    bool found=false;
    curr=first;
    while (curr!= NULL || !found){
        if (curr -> data== after)
            found=true;
        else
            curr==curr->next;
        }
        if (found==true)
        {
            new_node->next=curr->next;
            curr ->next=new_node;
        }
        else
            cout<<"Unable to find the point of insertion"<<endl;

}
void Student::deleting(char val)
{
    struct node *prev=NULL;
    struct node *curr=NULL;
    struct node *temp=NULL;
    bool found;
    if (first==NULL){
        cout<<"The list is empty"<<endl;
    }
    else if (first -> data==val){
        if (first==last){
            curr=first;
            first=NULL;
            last=NULL;
            delete curr;
        }
        else {
            curr=first;
            first=first -> next;
            delete curr;
        }
    }
    else {
        curr=first ->next;
        found=false;
        while (curr!= NULL && !found){
            if (curr ->data=val)
                found=true;
            else
                curr=curr ->next;
        }
        if (found==false){
            cout<<"The name has not been found"<<endl;
        }
        else {
            if (curr==last){
                temp=last;
                last=prev;
                delete temp;
            }
            else {
                temp=curr;
                prev -> next=curr -> next;
                delete temp;
            }
        }
    }


}

int main()
{
    Student stud;
    char name, next_name;

    while (true){
        stud.readfile();
        if (name=='d','e','l','e','t','e'){
            stud.deleting(name);
        }
        else {stud.inserting(name, next_name);}
        stud.output();
        stud.ascending();
        stud.descending();
    }

    return 0;


}
