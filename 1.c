#include<stdio.h>
#include<fcntl.h>
int main()
{
	int fd;
	fd = creat("XYZ",O_RDWR);
	printf("%d\n", fd);
	return 0;
}