//88. Middle ele of linked list
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

node* mid()
{
	node *p=head;
	int c=0;
	
	while(p)
	{
		c++;
		p=p->next;
	}
	p=head;
	c=c/2;
	while(c--)
	{
		p=p->next;	
	}
	return p;
}
int main()
{
	int arr[]={1,2,3,4,5,6};
	create(arr,6);
	
	cout<<"\n Before : ";
	display(head);
	
	cout<<"\n Middle Element  : ";
	node *t;
	t=mid();
	cout<<"\n val : "<<t->val<<" & address : "<<t;
	return 0;
}

