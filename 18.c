#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/file.h>
#include<sys/types.h>
int main()
{
	struct flock lock;
	char buffer[10];
	for (int i = 0; i < 10; ++i)
	{
		buffer[i] = '\0';
	}


	int fd = open("XYZ",O_RDWR);
	
	lock.l_type = F_RDLCK;
	lock.l_whence = SEEK_SET;
	lock.l_start = 0;
	lock.l_len = 1;
	lock.l_pid = getpid();

	printf("WAITING TO ENTER CRITICAL SECTION\n");
	fcntl(fd,F_SETLKW,&lock);

	printf("INSIDE CRITICAL SECTION\n");
	lseek(fd,1,0);
	read(fd,buffer,10);
	
	write(1,buffer,10);
	getchar();

	lock.l_type = F_UNLCK;

	fcntl(fd,F_SETLK,&lock);

	printf("OUTSIDE CRITICAL SECTION\n");

	return 0;
}

