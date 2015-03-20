#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
	int value;
	struct Node* next;
}Node;

typedef enum { false, true } BOOLEAN;

extern Node* head;
extern Node* curr;

void add(int number);

void prettyPrint();

BOOLEAN delete(int number);

struct Node* find(int number);
