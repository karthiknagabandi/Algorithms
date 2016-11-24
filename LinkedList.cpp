//LinkedList Implementaion
//TODO: Implement Print using Recursive calls

#include <iostream>
#include <string>
using namespace std;

struct Node
{
	/* data */
	int data;
	Node* nextnode;
};
Node* head;

void InsertAtFirst(int x)
{
	Node* temp = new Node;
	temp->data = x;
	temp->nextnode = head;
	head = temp;
}

void InsertAtPostion(int x, int position)
{
	//If user wants to insert at postion = 1
	Node* temp1 = new Node;
	temp1->data = x;
	temp1->nextnode = NULL;
	if(position == 1)
	{
		temp1->nextnode = head;
		head = temp1;
		return;
	}
	//Inserting at another postion other than first
	Node* temp2 = head;
	//traversing the linked list
	for(int i = 0 ; i < position - 2 ; i++)
	{
		temp2 = temp2->nextnode;
	}
	temp1->nextnode = temp2->nextnode;
	temp2->nextnode = temp1;
}

void Delete(int position)
{
	// The number to be deleted is at n'th postion
	// The nextnode of n-1'st position node should point to n+1'st node
	// and free the n'th node
	Node* temp1 = head;
	//if we want to delete the first node
	if(position == 1)
	{
		head = temp1->nextnode;
		free(temp1);
		return;
	}
	//Traversing the linked list
	for(int i = 0 ; i < position - 2; i++)
	{
		temp1 = temp1->nextnode;
	}
	Node* temp2 = temp1->nextnode;
	// pointing the n-1 node to the n+1 node
	temp1->nextnode = temp2->nextnode;
	free(temp2);
}

void ReverseList()
{
	//traverse the list and point the link field to the previous node insted of next node
	Node *current, *previous, *next;
	current = head;
	previous = NULL;
	while(current != NULL)
	{
		next = current->nextnode;
		current->nextnode = previous;
		previous = current;
		current = next;
	}
	head = previous;	
}


void Print()
{
	Node * temp = head;
	cout << "The List is:" << endl;
	while(temp != NULL)
	{
		cout << temp->data << " ";		
		temp = temp->nextnode;		
	}
}	


int main()
{
	int i,n,x, ch, position;
	head = NULL;	
	cout << "Select option" << endl;	
	do
	{
	cout << endl
		 << "1. InsertAtFirst" << endl 
		 << "2. InsertAtPostion" << endl 
		 << "3. Delete" << endl 
		 << "4. Reverse List"<< endl
		 << "5. Print" << endl 
		 << "6. Exit" << endl;

	cin >> ch;	
		switch(ch)
		{
			case 1:
				cout << "Enter Number" << endl;
				cin >> x;
				InsertAtFirst(x);
				Print();
				break;
			case 2:
				cout << "Enter the Number:";
				cin >> x;
				cout << "Enter Postion to insert the Number";
				cin >> position;
				InsertAtPostion(x, position);
				Print();
				break;	
			case 3:
				cout << "Enter Postion to insert the Number";
				cin >> position;				
				Delete(position);
			case 4:
				cout << "Reversing the list:";
				ReverseList();
			case 5:
				cout << "The List is:" << endl;				
				Print();
				break;		
		}
	}while(ch !=6);
	
	return 0;
}

































