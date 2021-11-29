
#include <iostream>
using namespace std;
struct Listnode
{
    int data;
    Listnode* left;
    Listnode* right;
    Listnode(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};
void display(Listnode* root)
{
    if(root==NULL)
     return ;
    cout<<root->data<<"->";
    display(root->left);
    display(root->right);
}

int main() {
 Listnode *root =new Listnode(1);
 root->left=new Listnode(2);
 root->right=new Listnode(3);
 root->left->left=new Listnode(4);
 display(root);
return 0;
}


//output
//1->2->4->3->
