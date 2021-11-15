#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* prev;
    Node* next;
    Node(int d)
    {
        data=d;
        prev=NULL;
        next=NULL;
    }
};

Node* insertBegin(Node *head,int data)
{
    Node* temp=new Node(data);
    if(head==NULL)
    {
        return temp;
    }
    temp->next=head;
    head->prev=temp;
    return temp;
}
void insertEnd(Node*head ,int data)
{
    Node* tempe=new Node(data);
    if(head==NULL) ;//return tempe;
    Node* cur=head;
    
    while(cur->next!=NULL)
    {
        cur=cur->next;
    }
    cur->next=tempe;
    tempe->prev=cur;
    //return head;
}
void display(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main() 
{
Node* head=new Node(10);
Node* temp1=new Node(20);
Node* temp2=new Node(30);

head->next=temp1;
temp1->prev=head;
temp1->next=temp2;
temp2->prev=temp1;
temp2->next=NULL;
Node* head1=NULL;
display(head);
cout<<"\n";
head1=insertBegin(head,5);
//insertEnd(head,40)



display(head1);
}
