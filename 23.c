#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
int main()
{
	if(!fork())
	{
		printf("Zombie Id: %d",getpid());
	}
	else
	{
		getchar();
	}
	
}