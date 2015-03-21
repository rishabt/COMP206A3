#include "list.h"

Node* head;
Node* curr;

int main()
{
	char file_name[256];
	FILE *fp;

	printf("Enter name of file: ");
	scanf("%s", &file_name[0]);
	
	fp = fopen(file_name, "r");

	while(fp == NULL)
	{
		printf("File does not exist, please re-enter: ");
        	scanf("%s", &file_name[0]);
        	fp = fopen(file_name, "r");
	}

	int i;
	char ch;

	while((ch = fgetc(fp)) != EOF)
	{
		i = ch - '0';
		if(i != -38)
		{
			add(i);
		}

	}

	prettyPrint();

	fclose(fp);
	return 0;
}
