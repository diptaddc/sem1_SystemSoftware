#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
int main()
{
	if(!fork())
	{
		getchar();
		printf("Orphan Id: %d",getpid());
		getchar();
	}
	else
	{
		sleep(1);
	}
	
}