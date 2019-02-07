#include<iostream>
#include<cstdlib>
using namespace std;

struct node
{
	int data;
	node *next;
};

struct node *start = NULL,*temp = NULL,*nnode = NULL;

void createnode(int x)
{
	nnode = (node *)malloc(sizeof(node));
	nnode->data = x;
	nnode->next = NULL;
	if(start == NULL)
	{
		start = nnode;
	}
	else
	{
		temp = start;
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = nnode;
	}
}

void Display()
{
	cout << "\n Your Elements in Linked List";
	temp = start;
	while(temp != NULL)
	{
		cout << "\n " << temp->data;
		temp = temp->next;
	}
}

int main()
{
	int n,x,i;
	cout << "\n Enter number of Elemnets in array : ";
	cin >> n;
	for(i=0;i<n;i++)
	{
		cout << "\n Enter the element at place : " << i << "  :  ";
		cin >> x;
		createnode(x);
	}
	//display
	Display();
}
