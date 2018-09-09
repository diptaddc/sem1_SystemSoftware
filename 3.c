#include<stdio.h>
#include<fcntl.h>
int main()
{
	int fd;
	fd = creat("Asign3",O_RDWR);
	printf("%d\n",fd );
	return 0;
}