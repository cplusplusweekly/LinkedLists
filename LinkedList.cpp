#include <iostream>

using namespace std;

class Node {
public:
	int data;
	Node *next;
};

class LinkedList {
private:
	Node *head, *tail;
public:
	LinkedList(){
		head=NULL;
		tail=NULL;
	}
	void insertNode(int number);
	int displayHead();
};



void LinkedList::insertNode(int number){
	Node *temp;

	temp = new Node;
	temp->data = number;
	temp->next = NULL;

	if (head == NULL){
		head=temp;
		tail=temp;
		temp=NULL;
	}
	else
	{
		tail->next=temp;
		tail=temp;
	}
}

int LinkedList::displayHead(){
	return head->data;

}


int main()
{
	cout << "Creating Linked List:\n";
	LinkedList ll;
	cout << "Linked List Created!\n";
	cout << "Adding number 1 as head\n";
	ll.insertNode(1);
	cout << "head is equal to " << ll.displayHead() << endl;

	return 0;
}