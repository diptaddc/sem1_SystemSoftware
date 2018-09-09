#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
	int fd,result;
	fd = open("test_10",O_RDWR);
	result = fcntl(fd,F_GETFL);
	printf("%d\n", result);
}