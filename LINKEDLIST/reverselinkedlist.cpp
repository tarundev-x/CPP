#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
 void display(Node *head)
 {
     while(head!=NULL)
     {
         cout<<head->data<<" ";
         head=head->next;
    }
}
Node* reverse_list(Node* head)
{
    Node* temp=NULL;
    while(head)
    {
        Node* newnode=head->next;
        head->next=temp;
        temp=head;
        head=newnode;
    }
    return temp;
}
int main() {
	Node *head=NULL;
	Node *first=NULL;
	Node *second=NULL;
	Node *third=NULL;
	
	head=new Node;
	first=new Node;
	second=new Node;
	third=new Node;
	
	head->data=1;
	head->next=first;
	first->data=2;
	first->next=second;
	second->data=3;
	second->next=third;
	third->data=4;
	third->next=NULL;
	
	Node*newhead=reverse_list(head);
	//cout<<newhead->data;
	display(newhead);
}
