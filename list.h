#include<stdio.h>
#include<stdlib.h>

/*
Define a node of the linked list
*/
typedef struct Node {
	int value;
	struct Node* next;
}Node;

/*
Define type boolean
*/
typedef enum { false, true } BOOLEAN;

/*
Extern variables 
*/
extern Node* head;
extern Node* curr;

/*
Add node to linked list
*/
void add(int number);

/*
Print the contents of linked list
*/
void prettyPrint();

/*
Delete node from linked list
*/
BOOLEAN delete(int number);

/*
Find a node in linked list
*/
struct Node* find(int number);
