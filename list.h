#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
	int value;
	struct Node* next;
}Node;

typedef enum { false, true } BOOLEAN;

extern Node* head;


void add(int);

void prettyPrint();

BOOLEAN delete(int);

struct Node* find(int);
