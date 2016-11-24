// Stacks: LinkedList implementation
// Push and Pop are done on the Head since the time complexity of O(1)
// Push and Pop done on Tail has time complexity of O(n)
// LIFO-

#include <iostream>
using namespace std;

struct Node
{
	/* data */
	int data;
	Node* nextnode;
};
Node* head;

void Push(int x)
{
	Node* temp = new Node;
	temp->data = x;
	temp->nextnode = head;
	head = temp;
}

void Pop()
{	
	Node* temp1 = head;
	head = temp1->nextnode;
	free(temp1);
	return;	
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
		 << "1. Push" << endl 
		 << "2. Pop" << endl 
		 << "3. Print" << endl 
		 << "4. Exit" << endl;

	cin >> ch;	
		switch(ch)
		{
			case 1:
				cout << "Enter Number" << endl;
				cin >> x;
				Push(x);
				Print();
				break;			
			case 2:
				cout << "Pop";				
				Pop();
			case 3:
				cout << "The List is:" << endl;				
				Print();
				break;		
		}
	}while(ch !=4);
	
	return 0;
}