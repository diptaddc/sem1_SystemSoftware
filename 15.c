#include<stdlib.h>
#include<stdio.h>
int main()
{
	char *user[100];
	printf("%s\n", getenv("PAGER"));
	return 0;
}