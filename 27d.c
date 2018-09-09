#include<stdio.h>
#include<unistd.h>
int main(int argc, char const *argv[])
{
	int x;
	char * buffer[] = {(char * )argv[0],(char *)argv[1],NULL};
	x = execv("/bin/ls",buffer);
	printf("%d\n", x);
	return 0;
}