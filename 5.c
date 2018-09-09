#include<stdio.h>
#include<fcntl.h>
void main()
{
	int fd[5],i;
	fd[0] = creat("Asign51",O_RDWR);
	fd[1] = creat("Asign52",O_RDWR);
	fd[2] = creat("Asign53",O_RDWR);
	fd[3] = creat("Asign54",O_RDWR);
	fd[4] = creat("Asign55",O_RDWR);
	for(;;)
	getchar();
}