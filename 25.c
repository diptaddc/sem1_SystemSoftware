#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
#include<sys/wait.h>
#include<stdlib.h>
 #include <sys/types.h>
int main()
{
	pid_t child;
	int wstatus;
	if(!fork())
	{
		printf("Child 1 Id: %d\n",getpid());
		sleep(2);
		printf("Child 1 done!\n");
		
	}
	else
	{
		if(!fork())
		{
			
			printf("Child 2 Id: %d\n", getpid());
			sleep(2);
			printf("Child 2 done!\n");
		}
		else
		{
			child = fork();
			if(child==0)
			{
				printf("Child 3 Id: %d\n", getpid());
				sleep(10);
				printf("Child 3 done!\n");
			}
			else
			{
				 sleep(1);
				 printf("Waiting for Child 3\n");
				 pid_t w = waitpid(child, &wstatus, WUNTRACED | WCONTINUED);
				 printf("Child 3 done, Bye!\n");
									
           }
		}
	}
}
