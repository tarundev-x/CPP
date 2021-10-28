
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
