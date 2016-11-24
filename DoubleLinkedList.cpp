//Double Linked List Implementation
//TODO: Insert at a position

#include <iostream>
#include <string>

using namespace std;

struct Node
{
	/* data */
	int data;
	Node* prev;
	Node* next;
};

Node* head;

void InsertAtFirst(int x)
{
	Node* temp = new Node;
	temp->data = x;
	temp->next = NULL;
	temp->prev = NULL;
	if(head == NULL)
	{
		head = temp;
		return;	
	}
	head->prev = temp;
	temp->next = head;
	head = temp;	
}

void InsertAtLast(int x)
{
	Node* temp = head;
	Node* newNode = new Node;
	newNode->data = x;
	if(head == NULL)
	{
		head = newNode;
		return;
	}
	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newNode;
	newNode->prev = temp;
	newNode = temp;
}

void Print()
{
	Node* temp = head;
	while(temp!=NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
}

void ReversePrint()
{
	Node* temp = head;
	if(temp == NULL) {return;}
	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	while(temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->prev;
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
		 << "2. InsertAtLast" << endl 
		 << "3. Print" << endl 
		 << "4. Reverse Print"<< endl 
		 << "5. Exit" << endl;

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
				cout << "Enter Number" << endl;
				cin >> x;
				InsertAtLast(x);
				Print();
				break;
			// case 2:
			// 	cout << "Enter the Number:";
			// 	cin >> x;
			// 	cout << "Enter Postion to insert the Number";
			// 	cin >> position;
			// 	InsertAtPostion(x, position);
			// 	Print();
			// 	break;	
			// case 3:
			// 	cout << "Enter Postion to insert the Number";
			// 	cin >> position;				
			// 	Delete(position);
			// case 4:
			// 	cout << "Reversing the list:";
			// 	ReverseList();
			case 3:
				cout << "The List is:" << endl;				
				Print();
				break;	
			case 4:
				cout << "The Reversed List is:" << endl;				
				ReversePrint();
				break;	

		}
	}while(ch !=5);
	
	return 0;
} 