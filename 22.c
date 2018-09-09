#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
int main()
{
	int fd;
	fd = open("22_file",O_RDWR);
	char buffer[80];
	for(int i = 0;i<80;i++)
		buffer[i] = '\0';
	

	if(!fd)
		printf("Error in File Opening\n");
	else
	{
		if(!fork())
		{
				scanf("%s",buffer);
				write(fd,buffer,80);
		}
		else
		{
			scanf("%s",buffer);
			write(fd,buffer,80);
		}
	}
}