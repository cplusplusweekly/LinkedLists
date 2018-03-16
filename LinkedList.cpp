#include <iostream>
#include <array>
#include <map>
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


int main()
{
	cout << "Creating Linked List:\n";
	LinkedList();
	cout << "Linked List Created!\n";

	return 0;
}