#include<stdio.h>
#include<unistd.h>
int main(int argc, char const *argv[])
{
	int x;
	char * buffer[] = {"ls","-Rl",NULL};
	//printf("%s",buffer);
	x = execvp("/bin/ls",buffer);
	printf("%d\n", x);
	return 0;
}