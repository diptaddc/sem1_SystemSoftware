#include<stdio.h>
#include<fcntl.h>
int main()
{
	int fd;
	fd = open("Asign3",O_EXCL);
	printf("%d\n",fd );
	return 0;
}