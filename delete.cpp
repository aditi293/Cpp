#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node *next;
	
};
void push(node **head_ref,int newdata)
{
	node *new_node=new node();
	
	new_node->data=newdata;
	new_node->next=(*head_ref);
	(*head_ref)=new_node;
}
void delete_node(node **head_ref,int key)
{
	node *temp=*head_ref;
	node *prev=NULL;
	if(temp!=NULL && temp->data==key)
	{
		*head_ref=temp->next;
		delete temp;
	}
	else
	{
		while(temp!=NULL && temp->data!=key)
		{
		
		prev=temp;
		temp=temp->next;
	}
		if(temp==NULL)
		{
			return;
		}
		prev->next=temp->next;
		delete temp;
	}
	
	}

	void printlist(node *n)
	{
		while(n!=NULL)
		{
			cout<<n->data<<" ";
			n=n->next;
		}
	}
	int main()
	{
		  node *head = NULL;
 
    // Add elements in linked list
    push(&head, 7);
    push(&head, 1);
    push(&head, 3);
    push(&head, 2);
 
    puts("Created Linked List: ");
    printlist(head);
 
    delete_node(&head, 1);
    puts("\nLinked List after Deletion of 1: ");
     
    printlist(head);
     
    return 0;
	}
