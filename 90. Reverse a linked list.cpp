//90. Reverse a linked list
#include <bits/stdc++.h>

using namespace std;

struct node{
	int val;
	node *next;
}*head=NULL;

void create(int a[], int n)	//creating Linked list using array.
{
	node *t,*last;
	if(head==NULL)
	{
		head= new node;
		head->val=a[0];
		head->next=NULL;
		
		last=head;
	}
	for(int i=1;i<n;i++)
	{
		t=new node;
		t->val=a[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}

void display(node *t)	//display function
{

	while(t)
	{
		cout<<t->val;
		t=t->next;
	}
}
void reverse()	//reverse function
{
	node *p=head,*q=NULL,*r=NULL;
	
	while(p!=NULL)
	{
		r=q;
		q=p;
		p=p->next;
		q->next=r;
	}
	head=q;
	
}
int main()
{
	int arr[]={1,2,3,4,5,6};
	create(arr,6);
	
	cout<<"\nBefore : ";
	reverse();
	
	cout<<"\nAfter : ";
	display(head);
	
	return 0;
}

