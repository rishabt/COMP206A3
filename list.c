#include "list.h"

Node* head;
Node* curr;

void add(int number){
	Node* n = malloc(sizeof(int) + sizeof(Node*));
	curr->next = n;
	curr = n;
}

int main(){

	curr = malloc(sizeof(int) + sizeof(Node*));	
	curr->value = 5;
	printf("%d", curr->value);
	return 0;
}
