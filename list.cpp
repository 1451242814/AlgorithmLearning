#include <iostream>

using namespace std;
struct Node
{
	char * data;
	struct Node *next;
}
class List
{
private:
	struct Node *head;
public:
	List()
	{
		head = new Node;
		head->next=NULL;
		head->data=NULL;
	}
\\Insert a node after the num i node
	void insert(int i,char *pdata)
	{
		struct Node * p=head;
		while(i--)
			p=p->next;
		if(p=NULL)
			cerr<<"Index out of range! when inserting!";
		Node * node=new Node;
		node->data=pdata;
		node->next=p->next;
		p->next=node;
	}
	void delete(int i,char *pdata)
	{
		struct Node * p=head;
		while(--i)
			p=p->next;
		strcut Node * t=p->next;
		p->next=p->next->next;
		delete t;
	}
}
