#include<iostream>
using namespace std;

class Node
{
	public:
	int data;
	Node *next;
	Node()
	{
		data = 0;
		next = NULL;	
	}
};
class LinkedList
{
	private:
		Node *head;
		Node * createNode();
		void initNode(Node *nnode, int data);
	public:
		LinkedList();
		~LinkedList();
		int attachBegin(int data);
		int attachEnd(int data);
		Node * detachBegin();
		Node * detachEnd();
		void traverse();
		Node * search(int data);
}

int main()
{
	
	LinkedList mylist;

	return(0);
}

LinkedList::LinkedList()
{
	head = NULL;
}
Node *LinkedList::createNode()
{
	Node *tmp;
	tmp = new Node();
	return(tmp);
}

void Node *LinkedList::initNode(Node *nnode, int data)
{
	nnode->data = data;
}

int LinkedList:: attachBegin(int data)
{
	Node *tmp;
	tmp = createNode();
	initNode(tmp,data);
	if(head == NULL)
		head = tmp;
	else
	{
		tmp->next = head;
		head = tmp;
	}
}
