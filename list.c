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


struct Node* find(int number)
{
	Node* loop = head;
	while(loop->value != number)
	{
		if(loop->next != NULL)
		{
			loop = loop->next;
		}
		else
		{
			return NULL;
		}
	}

	return loop;
}


BOOLEAN delete(int number)
{
	if(head->value == number)
	{
		head = head->next;
		printf("NUMBER WAS DELETED\n");
                return true;
	}

	Node* tmp = find(number);

	if(tmp != NULL)
	{
		if(tmp->next == NULL)
		{
			printf("HERE\n");
			free(tmp);
			tmp = NULL;
			printf("%d\n", tmp == NULL);
			printf("NUMBER WAS DELETED\n");
                	return true;
		}

		tmp->value = tmp->next->value;
		tmp->next = tmp->next->next;
		printf("NUMBER WAS DELETED\n");
		return true;
	}
	else
	{
		printf("NUMBER WAS NOT FOUND\n");
		return false;
	}

	return false;
}


int main()
{

	head = malloc(sizeof(int) + sizeof(Node*));	
	head->value = 5;

	add(4);
	add(3);
	add(2);
	add(1);

	prettyPrint();

	delete(3);
	prettyPrint();
	add(0);
	prettyPrint();
	delete(5);
	prettyPrint();
	delete(0);
	prettyPrint();
	delete(2);
	prettyPrint();	
	//printf("%d", curr->value);
	return 0;
}
