#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
	int fd;
	char buffer[10];
	for(int i =0;i<10;i++)
		buffer[i] = ' ';

	fd = open("test_10",O_RDWR);
	printf("File Descriptor: %d\n", fd);

	printf("Enter Input: ");
	scanf("%s",buffer);
	write(fd,buffer,10);

	int ls = lseek(fd,10,SEEK_CUR);
	printf("%d\n", ls);
	
	for(int i =0;i<10;i++)
		buffer[i] = ' ';
	printf("Enter Input: ");
	scanf("%s",buffer);
	write(fd,buffer,10);


	return 0;
}