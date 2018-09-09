#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/file.h>
#include<sys/types.h>
int main()
{
	struct flock lock;

	int fd = open("XYZ",O_RDWR);
	
	lock.l_type = F_WRLCK;
	lock.l_whence = SEEK_SET;
	lock.l_start = 0;
	lock.l_len = 0;
	lock.l_pid = getpid();

	printf("WAITING TO ENTER CRITICAL SECTION\n");
	fcntl(fd,F_SETLKW,&lock);

	printf("INSIDE CRITICAL SECTION\n");
	getchar();

	lock.l_type = F_UNLCK;

	fcntl(fd,F_SETLK,&lock);

	printf("OUTSIDE CRITICAL SECTION\n");

	return 0;
}

