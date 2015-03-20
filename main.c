#include "list.h"

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

	fclose(fp);
	return 0;
}
