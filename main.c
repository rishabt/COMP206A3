#include "list.h"
#include<string.h>

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
	int l = 0;
	char c[256];
	while((ch = fgetc(fp)) != EOF)
	{
		i = ch - '0';
		if(i != -38)
		{
			c[l] = ch;				// If number > 9 then we need to read each character of the line and append it
			l++;
			continue;
		}
		else
		{
			c[l] = '\0';
		}

		int val = atoi(c);
		c[0] = '\0';
		l = 0;

		add(val);
	}

	printf("The contents of the file as stored in linekd list are:\n");
	prettyPrint();

	char ans[3] = "Y";
	while(strcmp(ans, "Y") == 0 || strcmp(ans, "y") == 0 || strcmp(ans, "YES") == 0 || strcmp(ans, "yes") == 0 || strcmp(ans, "Yes") == 0)
	{
		printf("Enter the number to delete: ");
		int n;
		scanf("%d", &n);

		delete(n);

		printf("Contents of the list are now: \n");
		prettyPrint();

		printf("Do you want to delete another number?: ");
		scanf("%s", &ans[0]);
	}

	fclose(fp);
	return 0;
}
