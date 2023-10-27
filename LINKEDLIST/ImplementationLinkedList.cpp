
//basics aasigning values to each node



#include <iostream>
using namespace std;
struct Listnode
{
    int data;
    Listnode* next;
};
void display(Listnode* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main() {
Listnode *head=NULL;
Listnode *first=NULL;
Listnode *second=NULL;

head=new Listnode();
first=new Listnode();
second=new Listnode();
head->data=1;
head->next=first;
first->data=2;
first->next=second;
second->data=3;
second->next=NULL;
display(head);
}



//output  1 2 3
///modification using constructor
/////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;
struct Listnode
{
    int data;
    Listnode* next;
    Listnode(int d)
    {
        data=d;
        next=NULL;
    }
};
void display(Listnode* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main() {
Listnode *head=new Listnode(1);;
Listnode *first=new Listnode(2);;
Listnode *second=new Listnode(3);;



head->next=first;

first->next=second;

second->next=NULL;
display(head);
}

///////////////////////////////////////////////////////////////////////////

//Another approach
/////////////////////////////////
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

class Node{
   public:
       int data;
       
        Node* next;
        
        Node(int x)
        {
            data=x;
            next=NULL;
        }
};

void printlist(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void inserttail(Node* &head,int val)
{
    
    Node* newnode=new Node(val);
    
    if(head==NULL) 
    {
     head=newnode;  
     return;
    }
    
    Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
 
   
}
void insertbegin(Node* &head,int val)
{
    Node* temp=new Node(val);
 
   
    temp->next=head;
    head=temp;
    
}
bool search(Node* head,int key)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
}

Node* insertInMiddle(Node* head, int x)
{
	// Code here
	Node* cur=head;
	Node* newnode=new Node(x);
	int c=0;
	while(cur!=NULL)
	{
	    cur=cur->next;
	    c++;
	}
	cur=head;
	for(int i=1;i<(c+1)/2;i++)
	{
	    cur=cur->next;
	}
// 	cout<<cur->data<<endl;
	newnode->next=cur->next;
	cur->next=newnode;
	return head;
}
int main() {
  
    Node* head=NULL;
    
    inserttail(head,1);
    inserttail(head,2);
    inserttail(head,3);
    inserttail(head,4);
    printlist(head);
    
    insertbegin(head,10);
     
    printlist(head);
cout<<search(head,10)<<endl;

head=insertInMiddle(head,55);
printlist(head);
}

