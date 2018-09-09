#include <stdio.h>
#include<unistd.h>
void main()
{
	printf("%d\n",getpid());
	getchar();
	nice(-10);
	printf("Priority Increased!\n");
	getchar();
}