#include "list.h"

void add(int number)
{

	if(head == NULL)						// Checks if head is null
	{
		head = malloc(sizeof(int) + sizeof(Node*));		// Allocates memory for struct and assigns value
		head->value = number;
		return;
	}

	if(curr == NULL)						// Checks if current pointer is null
	{
		curr = malloc(sizeof(int) + sizeof(Node*));		// Allocates memory and assigns value
		curr->value = number;
		head->next = curr;
		return;
	}

	Node* n = malloc(sizeof(int) + sizeof(Node*));			// If none of the above then allocate memory and assign value
	n->value = number;
	curr->next = n;							// Change current pointer
	curr = n;
}


void prettyPrint()
{
	Node* loop = head;
	while(loop != NULL)						// Loop and print till null is found
	{
		printf("%d ", loop->value);
		loop = loop->next;
	}

	printf("\n");
}


struct Node* find(int number)
{
	Node* loop = head;
	while(loop->value != number)					// Loop through the list till value is found
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
	if(head->value == number)					// If required value is at head then reset head to head->next
	{
		head = head->next;
		printf("NUMBER WAS DELETED\n");
                return true;
	}

	Node* tmp = find(number);					// Get pointer to found node

	if(tmp != NULL)							// If pointer not null then set value to next and pointer to next->next
	{
		if(tmp->next == NULL)
		{
			Node* n = head;
			while(n->next != tmp)
			{
				n = n->next;
			}

			n->next = NULL;
			printf("NUMBER WAS DELETED\n");
                	return true;
		}

		tmp->value = tmp->next->value;
		tmp->next = tmp->next->next;
		printf("NUMBER WAS DELETED\n");
		return true;
	}
	else								// If pointer null then value does not exist
	{
		printf("NUMBER WAS NOT FOUND\n");
		return false;
	}

	return false;
}
