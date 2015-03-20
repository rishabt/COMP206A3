#include "list.h"

Node* head;

int main(){

	head = malloc(sizeof(int) + sizeof(Node*));	
	head->value = 5;
	printf("%d", head->value);
	return 0;
}
