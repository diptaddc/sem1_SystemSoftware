#include<stdio.h>
#include<sys/time.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
	int fd;
	fd = open("test_10",O_RDWR);
	
	return 0;
}