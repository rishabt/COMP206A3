#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
	int value;
	struct Node* next;
}Node;

extern Node* head;

