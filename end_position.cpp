#include<iostream>
using namespace std;
class node

{
	public:
	int data;
	node *next;
};
void push(node **head_ref,int new_data)
{
	node *new_node=new node();
	new_node->data=new_data;
	new_node->next=*head_ref;
	*head_ref=new_node;
	
}
void end_position(node **head_ref,int p)
{
	node *temp=*head_ref;
	int i=0,e=0;
	while(temp!=NULL)
	{
		i++;
		temp=temp->next;
		
		
	}
	if(i<p)
	return;
	temp=*head_ref;
	
	for(int j=1;j<i-p+1;j++)
	{
		temp=temp->next;
		cout<<temp->data;
		return;
	}
	
}
printlist(node *n)
{
	while(n!=NULL)
	{
		cout<<n->data<<" ";
		n=n->next;
	}
}
int main()
{
	node *head=NULL;

	push(&head,7);
	push(&head,17);
	push(&head,70);
	push(&head,65);
	push(&head,20);
	printlist(head);
	cout<<endl;
	int pos;
	cin>>pos;
	end_position(&head,pos);
}
