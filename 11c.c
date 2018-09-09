#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
	int fd,newfd;
	char buffer[100];
	for(int i =0;i<80;i++)
		buffer[i] = '\0';

	fd = open("test_10",O_APPEND|O_RDWR);
	printf("%d\n",fd);
	newfd = fcntl(fd,F_DUPFD);
	printf("Enter Input: \n");
	scanf("%s",buffer);

	write(newfd,buffer,80);
	return 0;
}