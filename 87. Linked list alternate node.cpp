//87. alternate every two node of Linked list 
#include <bits/stdc++.h>
using namespace std;


struct node{
	int val;
	node *next;
}*head=NULL;

void create(int a[], int n)
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

void display(node *t)
{

	while(t)
	{
		cout<<t->val;
		t=t->next;
	}
}



void alter()
{
	node *p=head;
	
	int v;
	while(p)
	{
		v=p->val;
		p->val=p->next->val;
		p->next->val=v;
		
		p=p->next->next;
	}
}
int main()
{	
	int arr[]={1,2,3,4,5,6};
	create(arr,6);
	cout<<"\nBefore : ";
	display(head);
	alter();
	cout<<"\nAfter  : ";
	display(head);
	return 0;
}

