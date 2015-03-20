#include "list.h"

Node* head;
Node* curr;

void add(int number)
{
	if(curr == NULL)
	{
		curr = malloc(sizeof(int) + sizeof(Node*));
		curr->value = number;
		head->next = curr;
		return;
	}

	Node* n = malloc(sizeof(int) + sizeof(Node*));
	n->value = number;
	curr->next = n;
	curr = n;
}


void prettyPrint()
{
	Node* loop = head;
	while(loop != NULL)
	{
		printf("%d ", loop->value);
		loop = loop->next;
	}

	printf("\n");
}


int main(){

	head = malloc(sizeof(int) + sizeof(Node*));	
	head->value = 5;

	add(4);
	add(3);
	add(2);
	add(1);

	prettyPrint();
	//printf("%d", curr->value);
	return 0;
}
