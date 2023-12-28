#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};



void InsertTail(Node*&head,int d)
{
    Node*newNode=new Node(d);
    if(head==NULL)
    {
        newNode->next=head;
        head=newNode;
    }
    
    Node*temp=head;
    
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    
}




bool search(Node*head,int key)
{
    Node*temp=head;
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

void reverseLinkedlist(Node*&head)
{
    Node*cur=head;
    Node*prevnode=NULL;
    Node*nextnode=head;
   while(nextnode!=NULL)
   {
       nextnode=cur->next;
       cur->next=prevnode;
       prevnode=cur;
       cur=nextnode;
   }
 head=prevnode;
    
}


void display(Node*head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    Node *head = new Node(1);
  
    InsertTail(head,2);
    InsertTail(head,3);
    InsertTail(head,4);

    display(head);
    reverseLinkedlist(head);
    display(head);
}
