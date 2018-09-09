#include<stdio.h>
#include<unistd.h>
int main(int argc, char const *argv[])
{
	int x;
	char  buffer[] = "-Rl\0";
	//printf("%s",buffer);
	x = execle("/bin/ls","ls",buffer,(char * )NULL,NULL);
	//printf("%d\n", x);
	return 0;
}