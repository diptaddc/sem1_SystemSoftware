#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
int main()
{
	char arr[100];
	int i,fd_write,fd_read;
	for (i = 0; i < 100; i++)
	{
		arr[i] = '\0';
	}
	fd_read = open("Assign3",O_RDWR);
	read(fd_read,arr,100);
	fd_write = open("XYZ",O_RDWR);
	write(fd_write,arr,100);
	
	//printf("%d\n", fd_read);
	return 0;

}